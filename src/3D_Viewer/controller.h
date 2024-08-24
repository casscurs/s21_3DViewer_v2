#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QVector3D>
#include <QOpenGLWidget>
#include <QSettings>
#include "display.h"

class controller : public QObject
{
    Q_OBJECT

public:
    controller();
    explicit controller(QObject *parent = nullptr);

    void setOGLwidget(display *display);

protected:
    void load_file();
    void set_central_projection();
    void set_parallel_projection();
    void set_vertices_type_none();
    void set_vertices_type_circle();
    void set_vertices_type_square();
    void set_vertices_size(float size);
    void set_vertices_color_rgb(float red, float green, float blue);
    void set_edges_type_solid();
    void set_edges_type_dotted();
    void set_edges_size(float size);
    void set_edges_color_rgb(float red, float green, float blue);
    void set_background_color_rgb(float red, float green, float blue);
    void set_model_scale(float scale);
    void move_model_x(float movement);
    void move_model_y(float movement);
    void move_model_z(float movement);
    void rotate_model_x(float angle);
    void rotate_model_y(float angle);
    void rotate_model_z(float angle);

    void save_settings();
    void load_settings();
    QSettings *settings;

signals:
    void set_settings(int v_t, int e_t, int proj, float v_s, float e_s,
                      QVector3D v_c, QVector3D e_c, QVector3D b_c);

private:
    display *widget = nullptr;

};

class controller_facade : public controller
{
    Q_OBJECT

public:
    explicit controller_facade(QObject *parent = nullptr);
    using controller::load_file;

public slots:
    inline void set_projection(int projection) { //inline потому что их можно писать в .h
        if(projection == 0){
            set_central_projection();
        } else if(projection == 1){
            set_parallel_projection();
        }
    };
    inline void set_vertices_type(int type){
        if(type == 0){
            set_vertices_type_none();
        } else if(type == 1){
            set_vertices_type_circle();
        } else if(type == 2){
            set_vertices_type_square();
        }
    };
    inline void set_edges_type(int type){
        if(type == 0){
            set_edges_type_solid();
        } else if(type == 1){
            set_edges_type_dotted();
        }
    };
    inline void set_color(int object, QVector3D rgb){
        if(object == 0){
            set_vertices_color_rgb(rgb.x(), rgb.y(), rgb.z());
        } else if(object == 1){
            set_edges_color_rgb(rgb.x(), rgb.y(), rgb.z());
        } else if(object == 2){
            set_background_color_rgb(rgb.x(), rgb.y(), rgb.z());
        }
    };
    inline void set_size(int object, float size){
        if(object == 0){
            set_vertices_size(size);
        } else if(object == 1){
            set_edges_size(size);
        }
    };
    inline void move_model(int axis, float movement){
        if(axis == 0){
            move_model_x(movement);
        } else if(axis == 1){
            move_model_y(movement);
        } else if(axis == 2){
            move_model_z(movement);
        }
    }
    inline void rotate_model(int axis, float angle){
        if(axis == 0){
            move_model_x(angle);
        } else if(axis == 1){
            move_model_y(angle);
        } else if(axis == 2){
            move_model_z(angle);
        }
    }
};

#endif // CONTROLLER_H