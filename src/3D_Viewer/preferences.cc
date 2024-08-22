#include "preferences.h"
#include "ui_preferences.h"

preferences::preferences(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preferences)
{
    ui->setupUi(this);
    this->setFixedSize(274,211);
    this->setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

preferences::~preferences()
{
    delete ui;
}

void preferences::on_radioButton_parallel_proj_clicked()
{
    emit projection(1);
}

void preferences::on_radioButton_central_proj_clicked()
{
    emit projection(0);
}

void preferences::on_radioButton_typeEdge_solid_clicked()
{
    emit edges(0);
}

void preferences::on_radioButton_typeEdge_dotted_clicked()
{
    emit edges(1);
}

void preferences::on_radioButton_typeVert_none_clicked()
{
    emit vertices(0);
}

void preferences::on_radioButton_typeVert_circle_clicked()
{
    emit vertices(1);
}

void preferences::on_radioButton_typeVert_square_clicked()
{
    emit vertices(2);
}

void preferences::on_doubleSpinBox_vertSize_valueChanged(double arg1)
{
    emit size(0, arg1);
}

void preferences::on_doubleSpinBox_edgeSize_valueChanged(double arg1)
{
    emit size(1, arg1);
}

void preferences::on_comboBox_colorVert_currentIndexChanged(int index)
{
    emit color(0, rgb_color(index));
}

void preferences::on_spinBox_redVert_valueChanged(int arg1)
{
    QVector3D rgb(arg1, ui->spinBox_greenVert->value(), ui->spinBox_blueVert->value());
    emit color(0, rgb);
}

void preferences::on_spinBox_greenVert_valueChanged(int arg1)
{
    QVector3D rgb(ui->spinBox_redVert->value(), arg1, ui->spinBox_blueVert->value());
    emit color(0, rgb);
}

void preferences::on_spinBox_blueVert_valueChanged(int arg1)
{
    QVector3D rgb(ui->spinBox_redVert->value(), ui->spinBox_greenVert->value(), arg1);
    emit color(0, rgb);
}

void preferences::on_comboBox_colorEdge_currentIndexChanged(int index)
{
    emit color(1, rgb_color(index));
}

void preferences::on_spinBox_redEdge_valueChanged(int arg1)
{
    QVector3D rgb(arg1, ui->spinBox_greenEdge->value(), ui->spinBox_blueEdge->value());
    emit color(1, rgb);
}

void preferences::on_spinBox_greenEdge_valueChanged(int arg1)
{
    QVector3D rgb(ui->spinBox_redEdge->value(), arg1, ui->spinBox_blueEdge->value());
    emit color(1, rgb);
}

void preferences::on_spinBox_blueEdge_valueChanged(int arg1)
{
    QVector3D rgb(ui->spinBox_redEdge->value(), ui->spinBox_greenEdge->value(), arg1);
    emit color(1, rgb);
}

void preferences::on_comboBox_colorBack_currentIndexChanged(int index)
{
    emit color(2, rgb_color(index));
}

void preferences::on_spinBox_redBack_valueChanged(int arg1)
{
    QVector3D rgb(arg1, ui->spinBox_greenBack->value(), ui->spinBox_blueBack->value());
    emit color(2, rgb);
}

void preferences::on_spinBox_greenBack_valueChanged(int arg1)
{
    QVector3D rgb(ui->spinBox_redBack->value(), arg1, ui->spinBox_blueBack->value());
    emit color(2, rgb);
}

void preferences::on_spinBox_blueBack_valueChanged(int arg1)
{
    QVector3D rgb(ui->spinBox_redBack->value(), ui->spinBox_greenBack->value(), arg1);
    emit color(2, rgb);
}

QVector3D preferences::rgb_color(int index)
{
    if(index == 4)
        return QVector3D(0, 0, 255);
    else if(index == 1)
        return QVector3D(0, 0, 0);
    else if(index == 2)
        return QVector3D(255, 0, 0);
    else if(index == 3)
        return QVector3D(0, 255, 0);
    else
        return QVector3D(255, 255, 255);
}
