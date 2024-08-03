#include "test.h"

TEST(Model, amount_vert_test) {
  const char *filename =
      "Backend/model/model_tests/examples_for_tests/normal.obj";
  s21::BuilderFromObjFile build(filename);
  std::shared_ptr<s21::ProductModel> model_ptr = nullptr;

  EXPECT_NO_THROW(build.CreateModel());
  model_ptr = build.GetProductModel();

  EXPECT_EQ(3618, model_ptr->matrix.get_rows());
}

TEST(Model, amount_face_test) {
  const char *filename =
      "Backend/model/model_tests/examples_for_tests/normal.obj";
  s21::BuilderFromObjFile build(filename);
  std::shared_ptr<s21::ProductModel> model_ptr = nullptr;

  EXPECT_NO_THROW(build.CreateModel());

  EXPECT_EQ((unsigned long)3442, model_ptr->facets.size());
}

TEST(Model, vert_fill_test) {
  const char *filename =
      "Backend/model/model_tests/examples_for_tests/normal.obj";
  s21::BuilderFromObjFile build(filename);
  std::shared_ptr<s21::ProductModel> model_ptr = nullptr;

  EXPECT_NO_THROW(build.CreateModel());
  EXPECT_NEAR(0.407673, model_ptr->matrix(3610, 0), 1e-6);
  EXPECT_NEAR(-0.571387, model_ptr->matrix(3610, 1), 1e-6);
  EXPECT_NEAR(0.205197, model_ptr->matrix(3610, 2), 1e-6);
}

// TEST(Model, face_fill_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   ck_assert_int_eq(4, syst.face[5].count);
//   ck_assert_int_eq(93, syst.face[5].f[0]);
//   ck_assert_int_eq(94, syst.face[5].f[1]);
//   ck_assert_int_eq(88, syst.face[5].f[2]);
//   ck_assert_int_eq(89, syst.face[5].f[3]);
//   res_free(&syst);
// }

// TEST(Model, minmax_ranges_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   ck_assert_double_eq_tol(-2.712309, *syst.vert.rangeX[0], 1e-6);
//   ck_assert_double_eq_tol(2.712309, *syst.vert.rangeX[1], 1e-6);
//   ck_assert_double_eq_tol(-3.294219, *syst.vert.rangeY[0], 1e-6);
//   ck_assert_double_eq_tol(2.597942, *syst.vert.rangeY[1], 1e-6);
//   ck_assert_double_eq_tol(-1.111950, *syst.vert.rangeZ[0], 1e-6);
//   ck_assert_double_eq_tol(1.111950, *syst.vert.rangeZ[1], 1e-6);
//   res_free(&syst);
// }

// TEST(Model, move_x_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   movement(&syst, 1.5, 'x');
//   ck_assert_double_eq_tol(1.907673, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(-0.571387, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(0.205197, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, move_y_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   movement(&syst, 1.5, 'y');
//   ck_assert_double_eq_tol(0.407673, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(0.928613, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(0.205197, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, move_z_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   movement(&syst, 1.5, 'z');
//   ck_assert_double_eq_tol(0.407673, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(-0.571387, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(1.705197, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, rot_x_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   rot(&syst, 90, 'x');
//   ck_assert_double_eq_tol(0.407673, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(-0.205197, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(-0.571387, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, rot_y_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   rot(&syst, 90, 'y');
//   ck_assert_double_eq_tol(0.205197, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(-0.571387, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(-0.407673, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, rot_z_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   rot(&syst, 90, 'z');
//   ck_assert_double_eq_tol(0.571387, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(0.407673, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(0.205197, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, mult_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   mult(&syst, 10);
//   ck_assert_double_eq_tol(4.07673, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(-5.71387, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(2.05197, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, frames_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   resize_frames(&syst, 5);
//   ck_assert_double_eq_tol(0.69189, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(-0.969741, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(0.348254, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, central_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(0, matrix_fill(filename, &syst));
//   center_frames(&syst);
//   ck_assert_double_eq_tol(0.407673, syst.vert.coord[3610].x, 1e-6);
//   ck_assert_double_eq_tol(-0.223248, syst.vert.coord[3610].y, 1e-6);
//   ck_assert_double_eq_tol(0.205197, syst.vert.coord[3610].z, 1e-6);
//   res_free(&syst);
// }

// TEST(Model, file_err_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/normalin.obj";
//   ck_assert_int_eq(-1, obj_counter(filename, &syst));
//   ck_assert_int_eq(-1, matrix_fill(filename, &syst));
// }

// TEST(Model, face_err_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/nenormal.obj";
//   ck_assert_int_eq(0, obj_counter(filename, &syst));
//   ck_assert_int_eq(-2, matrix_fill(filename, &syst));
// }

// TEST(Model, empty_file_test) {
//   res syst = {0};
//   const char *filename =
//       "Backend/model/model_tests/examples_for_tests/empty.obj";
//   ck_assert_int_eq(-1, obj_counter(filename, &syst));
// }
