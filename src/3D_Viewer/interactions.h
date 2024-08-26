#ifndef INTERACTIONS_H
#define INTERACTIONS_H

#include <QDialog>

namespace Ui {
class interactions;
}

namespace s21 {

/**
 * @brief класс диалогового окна действий с моделью
 */
class interactions : public QDialog
{
    Q_OBJECT

public:
    explicit interactions(QWidget *parent = nullptr);
    ~interactions();

private slots:
    void on_pushButton_move_clicked();

    void on_pushButton_rotate_clicked();

    void on_doubleSpinBox_scale_valueChanged(double arg1);

signals:
    void move(int axis, float movement);
    void rotate(int axis, float angle);
    void scale(float scale);

private:
    Ui::interactions *ui;
};

}
#endif // INTERACTIONS_H
