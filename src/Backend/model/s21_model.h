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

class ProductModel {
 public:
  std::vector<std::vector<int>> facets{};
  S21Matrix matrix{};
  double range_x[2] = {};
  double range_y[2] = {};
  double range_z[2] = {};

  ProductModel() : matrix(1, 3) {}
  ~ProductModel() = default;

  // ATHENIAN TRANSFORMATIONS
  void Movement(const double a, const char flag) noexcept;
  void Mult(const double a);
  void ResizeFrames(const double f);
  void CenterFrames() noexcept;
  void Rot(const double angle, const char flag) noexcept;
};

class Builder {
 public:
  virtual void CreateModel() = 0;
  virtual ~Builder() = default;
};

class BuilderFromObjFile : public Builder {
 private:
  std::shared_ptr<ProductModel> model_ptr = nullptr;
  const char *file_name = nullptr;

 public:
  BuilderFromObjFile(const char *file_name)
      : model_ptr(std::make_shared<ProductModel>()), file_name(file_name) {}

  void Reset() noexcept { model_ptr.reset(); }

  void CreateModel() override;

  std::shared_ptr<ProductModel> GetProductModel() const noexcept {
    return model_ptr;
  }

 private:
  void ObjCounter();
  void MatrixFill();
  void MinMax(int vector_counter);
};

}  // namespace s21

#endif  // S21_ANTHEN_H