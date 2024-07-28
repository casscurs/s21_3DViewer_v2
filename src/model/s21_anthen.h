#ifndef S21_ANTHEN_H
#define S21_ANTHEN_H

#include <vector>

#include "../matrix_h/s21_matrix_oop.h"

namespace s21 {

class ProductModel {
 public:
  // typedef struct Facets {
  //   int count = 0;     // количество вершин в facet
  //   int *f = nullptr;  // массив с вершинами
  // } Facets;

  // int amount_facets = 0;
  // Facets *facet;
  std::vector<std::vector<int>> facets{};
  S21Matrix matrix{};
  double rangeX[2] = {};
  double rangeY[2] = {};
  double rangeZ[2] = {};

  ProductModel() : matrix(1, 3) {}

  // не забыть про деструктор с освобождением памяти

 public:
  // ATHENIAN TRANSFORMATIONS
  // void movement(res *syst, double a, char flag);
  // void mult(res *syst, double a);
  // void resize_frames(res *syst, double f);
  // void center_frames(res *syst);
  // void rot(res *syst, double angle, char flag);
};

class Builder {
 public:
  virtual void CreateModel() const = 0;
  virtual ~Builder() = default;
};

class BuilderFromObgFile : public Builder {
 private:
  ProductModel *model = nullptr;
  const char *file_name = nullptr;

  // Бросаюь исключения
  void ObjCounter();
  void MatrixFill();
  void MinMax(int vector_counter);

 public:
  BuilderFromObgFile(const char *file_name)
      : model(new ProductModel()), file_name(file_name) {}

  ~BuilderFromObgFile() {
    if (model != nullptr) delete model;
  }

  void Reset() {
    if (model != nullptr) delete model;
    model = new ProductModel();
  }

  void CreateModel() const override {
    // проверка на нулевые указатели
    // очистка
    // убрать метод переместив его в констроктор
  }

  ProductModel *GetProductModel() { return this->model; }
};

}  // namespace s21

#endif  // S21_ANTHEN_H