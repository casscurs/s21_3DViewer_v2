#include "mainwindow.h"

#include "./ui_mainwindow.h"

namespace s21 {

int file_status_main = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), controller(new controller_facade(this)) {
  ui->setupUi(this);

  load_settings();

  controller->setOGLwidget(ui->openGLWidget);
  connect(this->controller, &controller_facade::set_settings, preferences_dialog, &preferences::set_settings);
  connect(this->ui->pushButton_openFile, &QPushButton::clicked, this->controller, &controller_facade::load_file);

  timer = new QTimer(0);
}

MainWindow::~MainWindow() {
  delete preferences_dialog;
  delete interactions_dialog;
  save_settings();
  delete ui;
}

void MainWindow::save_settings() {
  // init
  //settings->setValue("settings_exist", 1);

  // for verticles
//  settings->setValue("vert_r", ui->widget->vert_r);
//  settings->setValue("vert_g", ui->widget->vert_g);
//  settings->setValue("vert_b", ui->widget->vert_b);
//  settings->setValue("verticles type", ui->widget->verticles);
//  settings->setValue("verticles size", ui->widget->vertSize);

  // for edges
//  settings->setValue("edge_r", ui->widget->edge_r);
//  settings->setValue("edge_g", ui->widget->edge_g);
//  settings->setValue("edge_b", ui->widget->edge_b);
//  settings->setValue("line type", ui->widget->lineType);
//  settings->setValue("line size", ui->widget->lineSize);

  // for background
//  settings->setValue("background_color_red", ui->widget->back_r);
//  settings->setValue("background_color_green", ui->widget->back_g);
//  settings->setValue("background_color_blue", ui->widget->back_b);

  // for projection type
//  settings->setValue("projection_type", ui->widget->projection);
//  // for file
//  settings->setValue("baseFile", file);
}

void MainWindow::load_settings() {
//  // if where was init of settings before else nothing
//  if (settings->value("settings_exist").toInt()) {
//    // For Verticles
//    int vert_type = settings->value("verticles type").toInt();
//    switch (vert_type) {
//      case 0:
//        ui->radioButton_typeVert_none->setChecked(true);
//        ui->widget->verticles = 0;
//        break;
//      case 1:
//        ui->radioButton_typeVert_circle->setChecked(true);
//        ui->widget->verticles = CIRCLE;
//        break;
//      case 2:
//        ui->radioButton_typeVert_square->setChecked(true);
//        ui->widget->verticles = SQUARE;
//        break;
//    }
//    ui->widget->vertSize = settings->value("verticles size").toDouble();
//    ui->doubleSpinBox_vertSize->setValue(ui->widget->vertSize);
//    ui->widget->vert_r = settings->value("vert_r").toDouble();
//    ui->widget->vert_g = settings->value("vert_g").toDouble();
//    ui->widget->vert_b = settings->value("vert_b").toDouble();

//    ui->spinBox_redVert->setValue(ui->widget->vert_r);
//    ui->spinBox_greenVert->setValue(ui->widget->vert_g);
//    ui->spinBox_blueVert->setValue(ui->widget->vert_b);
//    // for file

//    // For EDGES
//    int edges_type = settings->value("line type").toInt();
//    switch (edges_type) {
//      case 1:
//        ui->radioButton_typeEdge_solid->setChecked(true);
//        ui->widget->lineType = SOLID;
//        break;
//      case 2:
//        ui->radioButton_typeEdge_dotted->setChecked(true);
//        ui->widget->lineType = DOTTED;
//        break;
//    }
//    ui->widget->lineSize = settings->value("line size").toInt();
//    ui->doubleSpinBox_edgeSize->setValue(ui->widget->lineSize);
//    ui->widget->edge_r = settings->value("edge_r").toDouble();
//    ui->widget->edge_g = settings->value("edge_g").toDouble();
//    ui->widget->edge_b = settings->value("edge_b").toDouble();

//    ui->spinBox_redEdge->setValue(ui->widget->edge_r);
//    ui->spinBox_greenEdge->setValue(ui->widget->edge_g);
//    ui->spinBox_blueEdge->setValue(ui->widget->edge_b);

//    // For BACKGROUND
//    ui->widget->back_r = settings->value("background_color_red").toDouble();
//    ui->widget->back_g = settings->value("background_color_green").toDouble();
//    ui->widget->back_b = settings->value("background_color_blue").toDouble();

//    ui->spinBox_redBack->setValue(ui->widget->back_r);
//    ui->spinBox_greenBack->setValue(ui->widget->back_g);
//    ui->spinBox_blueBack->setValue(ui->widget->back_b);

//    // For projection type
//    ui->widget->projection = settings->value("projection_type").toInt();
//    ui->comboBox_projection->setCurrentIndex(!ui->widget->projection);
//    ui->widget->update();
//  }
}

void MainWindow::on_pushButton_screen_clicked() {
//  QString screen_name =
//      QFileDialog::getSaveFileName(this, "Save screen", "", "*.jpeg *.bmp");
//  if (!screen_name.isEmpty()) {
//    ui->widget->grab().save(screen_name);
//  }
}

void MainWindow::on_pushButton_gif_clicked() {
  timer->start(100);
  timerRun();
  count = 0.0;
}

void MainWindow::timerRun() {
//  ui->horizontalSlider_timer->setSliderPosition(count * 10);
//  if (count <= 10.0) {
//    gif.push_back(ui->widget->grab().toImage());
//    count += 0.1;
//  } else {
//    makeGIF();
//    timer->stop();
//  }
}

void MainWindow::makeGIF() {
  QString gif_name =
      QFileDialog::getSaveFileName(this, "Save gif", "", tr("(*.gif)"));
  QGifImage gif_image(QSize(1200, 1200));
  gif_image.setDefaultDelay(100);

  for (QVector<QImage>::Iterator screen = gif.begin(); screen != gif.end();
       ++screen) {
    gif_image.addFrame(*screen);
  }
  gif_image.save(gif_name);
  gif.clear();
  count = 0.0;
}

void MainWindow::on_actionView_preferences_triggered()
{
    connect(preferences_dialog, &preferences::projection, this->controller, &controller_facade::set_projection);
    connect(preferences_dialog, &preferences::edges, this->controller, &controller_facade::set_edges_type);
    connect(preferences_dialog, &preferences::vertices, this->controller, &controller_facade::set_vertices_type);
    connect(preferences_dialog, &preferences::size, this->controller, &controller_facade::set_size);
    connect(preferences_dialog, &preferences::color, this->controller, &controller_facade::set_color);
    preferences_dialog->show();
}

void MainWindow::on_actionModel_interactions_triggered()
{
    connect(interactions_dialog, &interactions::move, this->controller, &controller_facade::move_model);
    connect(interactions_dialog, &interactions::rotate, this->controller, &controller_facade::rotate_model);
    connect(interactions_dialog, &interactions::scale, this->controller, &controller_facade::set_model_scale);
    interactions_dialog->show();
}

}
