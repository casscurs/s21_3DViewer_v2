#Makefile by Casscurs

PROJECT_NAME = 3DViewer
VERSION = 2.0

# Цвета для оформления вывода
COLOR_TITLE = \033[1;36m
COLOR_SUCCESS = \033[1;32m
COLOR_RESET = \033[0m
# Исходники
NAME = 3DViewer.a

SRC_FILES = $(wildcard ./Backend/model/*.cc) 

HEADER_FILES = $(wildcard ./Backend/model/*.h)

OBJ_FILES = $(patsubst %.cc, %.o, $(SRC_FILES))
DEP_FILES = $(patsubst %.cc, %.d, $(SRC_FILES))
MATRIX_OBJ_FILES = $(wildcard ./Backend/matrix/*.o)

# FRONT_FILES = $(wildcard ./Frontend/Calculator/*.cc)
# FRONT_HEADERS = $(wildcard ./Frontend/*.h)

# Тесты
TESTS_DIR = Backend/model/model_tests/
TESTS_SRC = $(wildcard $(TESTS_DIR)*.cc)
TESTS_OBJ = $(patsubst %.cc,%.o,$(TESTS_SRC))
# Флаги
CXX = g++ -std=c++17

CXXFLAGS = -Wall -Wextra -Werror -Wstrict-prototypes \
					 -Wmissing-declarations -Wdeclaration-after-statement -O2 \
					 -g -fsanitize=address,undefined,unreachable \
					 -fno-sanitize-recover -fstack-protector\

AR = ar rcs
LIBS = -lgtest
# Документация .dvi
SRC_DIR = documentation
# Дистрибутируемый архив 
DIST_DIR = dist/$(PROJECT_NAME)-$(VERSION)
DIST_FILES = $(SRC_FILES) $(HEADER_FILES) $(FRONT_FILES) $(FRONT_HEADERS) $(TESTS_SRC) $(SRC_DIR)/* Makefile

all : clean matrix_lib_clean matrix_lib test

gcovr_report: clean add_coverage test
	mkdir gcovr/
	gcovr --html-details gcovr/report.details.html
	rm -rf ./*.gc*
	open gcovr/report.details.html

add_coverage:
	$(eval CXXFLAGS += --coverage)

test: $(NAME) $(TESTS_OBJ)
	$(CXX) $(CXXFLAGS) $(TESTS_OBJ) $(LIBS) $(NAME) -o $@
	./test

$(NAME) : $(OBJ_FILES)
	 $(AR) $(NAME) $(MATRIX_OBJ_FILES) $?
	@echo "$(COLOR_SUCCESS)=== Build complete ===$(COLOR_RESET)"

%.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@ -MMD

include $(wildcard $(DEP_FILES))

install: $(NAME)
	cd Frontend/Calculator && mkdir -p build && cd build && cmake .. && make
	 mv Frontend/Calculator/build ../src 

start:
	open build/Calculator.app
	
uninstall:
	rm -rf build 

dvi:
	rm -rf $(SRC_DIR)
	mkdir $(SRC_DIR)
	@doxygen Doxyfile
	@mv html latex $(SRC_DIR)
	open documentation/html/index.html

undvi:
	@rm -rf $(SRC_DIR)

dist: dvi
	@echo "$(COLOR_TITLE)=== Creating distribution archive ===$(COLOR_RESET)"
	mkdir -p $(DIST_DIR)
	cp -r $(DIST_FILES) $(DIST_DIR)/
	tar czvf $(DIST_DIR).tar.gz -C dist $(PROJECT_NAME)-$(VERSION)/
	rm -r $(DIST_DIR)
	@echo "$(COLOR_SUCCESS)=== Distribution archive created ===$(COLOR_RESET)"

distclean:
	@rm -rf dist

matrix_lib:
	@$(MAKE) -C ./Backend/matrix -f Makefile obj

matrix_lib_clean:
	@$(MAKE) -C ./Backend/matrix -f Makefile clean

clean : uninstall undvi distclean
	@echo "$(COLOR_TITLE)=== Cleaning ===$(COLOR_RESET)"
	@rm -rf *.a *.o gcovr *.gcda *.gcno $(DEP_FILES) $(NAME) test
	@rm -rf ./Backend/model/model_tests/*.d ./Backend/model/model_tests/*.o ./Backend/model/model_tests/*.gcda ./Backend/model/model_tests/*.gcno
	@rm -rf ./Backend/model/*.d ./Backend/model/*.o ./Backend/model/*.gcda ./Backend/model/*.gcno

cccheck :
	@echo "$(COLOR_TITLE)=== Running cccheck ===$(COLOR_RESET)"
	cccheck --enable=all --suppress=missingIncludeSystem $(SRC_FILES) $(HEADER_FILES) $(TESTS_SRC)

format :
	@echo "$(COLOR_TITLE)=== Formatting code ===$(COLOR_RESET)"
	clang-format -i -style=Google $(SRC_FILES) $(HEADER_FILES) $(FRONT_FILES) $(FRONT_HEADERS) $(TESTS_SRC)


check-format :
	@echo "$(COLOR_TITLE)=== Checking code formatting ===$(COLOR_RESET)"
	clang-format -n -style=Google $(SRC_FILES) $(HEADER_FILES) $(FRONT_FILES) $(FRONT_HEADERS) $(TESTS_SRC)

.PHONY : all clean cccheck cclint format check-format dvi undvi dist distclean