#ifndef DISPLAY_H
#define DISPLAY_H

#define NONE 0
#define SOLID 1
#define DOTTED 2

#define CIRCLE 1
#define SQUARE 2

#define CENTRAL 0
#define PARALLEL 1

#define GL_SILENCE_DEPRECATION
#include <QTime>
#include <QWidget>
#include <QtOpenGL>
#include <QtOpenGLWidgets>
#include <QVector3D>

class display : public QOpenGLWidget {
  Q_OBJECT
 private:
  double xRot = 0, yRot = 0, zRot = 0;
  double scale = 0;
  QPoint mPos;
  QTimer tmr;
  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;

  void resizeGL(int w, int h) override;
  void paintGL() override;
  void drawCoordinateAxes();

 public:

  QVector3D back_color = {0.0f, 0.0f, 0.0f};
  QVector3D vert_color = {255.0f, 255.0f, 255.0f};
  QVector3D edge_color = {255.0f, 255.0f, 255.0f};
  int edges_type = 0;
  float edges_size = 0.5;
  int vert_type = 0;
  float vert_size = 0.5;
  int projection = PARALLEL;

  void initializeGL() override;
  int flag;
  display(QWidget *parent = nullptr);
  void openFile(char *filename, int fileStatus);
  void move_model(double a, char axis);
  void rot_model(double angle, char axis);
  void scale_model(double a);
};

#endif  // DISPLAY_H
