#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QMainWindow>
#include <QMovie>
#include <QTimer>
#include <QtOpenGL/QtOpenGL>
#include <QtOpenGLWidgets/QtOpenGLWidgets>

#include "preferences.h"
#include "interactions.h"
#include "controller.h"
#include "gifimage/qgifimage.h"
#include "giflib/gif_lib.h"
#include "giflib/gif_lib_private.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  char *result_path = NULL;
  QString file = 0;
  int fileStatus = 0;

 public slots:
  void openFile();

 private slots:
  void on_pushButton_screen_clicked();
  void on_pushButton_gif_clicked();
  void makeGIF();
  void timerRun();
  void save_settings();
  void load_settings();

  void on_actionView_preferences_triggered();

  void on_actionModel_interactions_triggered();

private:
  Ui::MainWindow *ui;
  QString file_name = "";
  QTimer *timer;
  QVector<QImage> gif;
  float count = 0;
  QMessageBox errorBox;
  controller_facade *controller;
  preferences *preferences_dialog = new preferences();
  interactions *interactions_dialog = new interactions();

 signals:
  void pushButton_openFile_clicked();
};
#endif  // MAINWINDOW_H
