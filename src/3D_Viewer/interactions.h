#ifndef INTERACTIONS_H
#define INTERACTIONS_H

#include <QDialog>

namespace Ui {
class interactions;
}

class interactions : public QDialog
{
    Q_OBJECT

public:
    explicit interactions(QWidget *parent = nullptr);
    ~interactions();

private slots:
    void on_pushButton_move_clicked();

    void on_pushButton_rotate_clicked();

signals:
    void move(int axis, float movement);
    void rotate(int axis, float angle);

private:
    Ui::interactions *ui;
};

#endif // INTERACTIONS_H