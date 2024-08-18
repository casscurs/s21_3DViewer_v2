#ifndef S21_ANTHEN_H
#define S21_ANTHEN_H

#include <memory>
#include <vector>

#include "../matrix/s21_matrix_oop.hpp"

// typedef struct coords {  // структура с координатами точек
//   double x, y, z;
// } points;

// typedef struct vertexes {
//   int amountVert;  // количество вершин
//   points *coord;
//   double *rangeX[2];
//   double *rangeY[2];
//   double *rangeZ[2];
// } vertex;

// typedef struct facets {
//   int count;  // количество вершин в facet
//   int *f;     // массив с вершинами
// } facet;

// typedef struct result {
//   vertex vert;       // вершины
//   facet *face;       // грани
//   int amountFacets;  // количество структур facet
// } res;

namespace s21 {

/**
 * @brief Класс определяющий модель объекта
 */
class ProductModel {
 public:
  std::vector<std::vector<int>> facets{};
  S21Matrix matrix{};
  double range_x[2] = {};
  double range_y[2] = {};
  double range_z[2] = {};

  ProductModel() : matrix(1, 3) {}
  ~ProductModel() = default;

  /**
   * @brief Сдвиг модели на a по оси координат
   * @param a величина сдвига
   * @param flag координата сдвига
   */
  void Movement(const double a, const char flag) noexcept;

  /**
   * @brief Масштабирование в a раз
   * @param a величина масштабирования
   */
  void Mult(const double a);

  /**
   * @brief Вписать модель в рамку величиной f
   * @param f величина рамки
   */
  void ResizeFrames(const double f);

  /**
   * @brief Центрирование объекта
   */
  void CenterFrames() noexcept;

  /**
   * @brief Поворот на угол вокруг оси координат
   * @param angle величина угла поворота
   * @param flag по какой координате поворот
   */
  void Rot(const double angle, const char flag) noexcept;
};

/**
 * @brief Абстрактный класс Builder
 */
class Builder {
 public:
  virtual void CreateModel() = 0;
  virtual ~Builder() = default;
};

/**
 * @brief Класс определеющий создание модели из файлов с расширением .obj
 */
class BuilderFromObjFile : public Builder {
 private:
  std::shared_ptr<ProductModel> model_ptr = nullptr;
  const char *file_name = nullptr;

 public:
  BuilderFromObjFile(const char *file_name) : file_name(file_name) {}

  ~BuilderFromObjFile() = default;

  /**
   * @brief Сброс построенной модели
   */
  void Reset() noexcept {
    if (model_ptr != nullptr) model_ptr.reset();
  }
  /**
   * @brief Построение модели из переданного файла
   */
  void CreateModel() override;

  /**
   * @brief Геттер для класса
   * @return указатель на модель
   */
  std::shared_ptr<ProductModel> GetProductModel() const noexcept {
    return model_ptr;
  }

 private:
  /**
   * @brief Метод выполняющий первичный просмотр файла для инициализации всех
   * необходимых структур данных
   */
  void ObjCounter();
  /**
   * @brief Метод выполняющий валидацию и запись данных из файла в структуру
   * данных
   */
  void MatrixFill();
  /**
   * @brief метод определяющий минимум и максимум по каждой координате
   * @param vector_counter общее число вершин
   */
  void MinMax(int vector_counter);
};

}  // namespace s21

#endif  // S21_ANTHEN_H