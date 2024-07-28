#include "./s21_anthen.h"

namespace s21 {

void BuilderFromObgFile::ObjCounter() {
  FILE *file = nullptr;
  file = fopen(file_name, "r");

  if (!file) throw std::ios_base::failure("file does not open");

  char *str = NULL;
  size_t len = 0;
  int vertex_counter = 0;
  int facets_counter = 0;

  while (getline(&str, &len, file) != -1) {
    if (*str == 'v' && *(str + 1) == ' ') ++vertex_counter;
    if (*str == 'f' && *(str + 1) == ' ') ++facets_counter;
  }
  fclose(file);
  if (str) free(str);

  if (vertex_counter == 0) throw std::ios_base::failure("file error");

  model->facets.reserve(facets_counter);
  model->matrix.set_cols(vertex_counter);
}

void BuilderFromObgFile::MatrixFill() {
  FILE *file = nullptr;
  FILE *file = fopen(file_name, "r");

  if (!file) throw std::ios_base::failure("file does not open");

  char *str = NULL;
  size_t len = 0;
  int vertex_counter = 0, facets_counter = 0;

  char *tmp;

  while (getline(&str, &len, file) != -1) {
    if (*str == 'v' && *(str + 1) == ' ') {
      strtok(str, " \n");
      tmp = strtok(NULL, " \n");
      model->matrix(vertex_counter, 0) = atof(tmp);
      tmp = strtok(NULL, " \n");
      model->matrix(vertex_counter, 1) = atof(tmp);
      tmp = strtok(NULL, " \n");
      model->matrix(vertex_counter, 2) = atof(tmp);
      tmp = NULL;
      MinMax(vertex_counter);
      vertex_counter++;
    }

    if (*str == 'f' && *(str + 1) == ' ') {
      int tmp = 0;
      for (int i = 0; *(str + i) != '\n'; i++)
        if (*(str + i) == ' ') tmp++;
      syst->face[f_c].count = tmp;
      syst->face[f_c].f = calloc(tmp, sizeof(int));
      tmp = 0;
      strtok(str, " \n");
      tmp = strtok(NULL, " \n");
      while (tmp != NULL && flag == 0) {
        if (!sscanf(tmp, "%d", &syst->face[f_c].f[tmp])) flag = FILE_ERROR;
        if (syst->face[f_c].f[tmp] > syst->vert.amountVert ||
            syst->face[f_c].f[tmp] < 0)
          flag = FACET_ERROR;
        else
          syst->face[f_c].f[tmp] -= 1;
        tmp++;
        tmp = strtok(NULL, " \n");
      }
      f_c++;
    }
  }
  fclose(file);
  if (str) free(str);
  return flag;
}
void BuilderFromObgFile::MinMax(int vertex_counter) {
  if (model->matrix(vertex_counter, 0) < model->rangeX[0])
    model->rangeX[0] = model->matrix(vertex_counter, 0);
  if (model->matrix(vertex_counter, 0) > model->rangeX[1])
    model->rangeX[1] = model->matrix(vertex_counter, 0);

  if (model->matrix(vertex_counter, 1) < model->rangeY[0])
    model->rangeY[0] = model->matrix(vertex_counter, 1);
  if (model->matrix(vertex_counter, 1) > model->rangeY[1])
    model->rangeY[1] = model->matrix(vertex_counter, 1);

  if (model->matrix(vertex_counter, 2) < model->rangeZ[0])
    model->rangeZ[0] = model->matrix(vertex_counter, 2);
  if (model->matrix(vertex_counter, 2) > model->rangeZ[1])
    model->rangeZ[1] = model->matrix(vertex_counter, 2);
}

}  // namespace s21

// int main(void) {
//   ConcreteBuilder1* builder = new ConcreteBuilder1();

//   Product1* p = builder->GetProduct();

//   return 0;
// }