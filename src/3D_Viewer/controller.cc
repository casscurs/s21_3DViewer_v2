#include "controller.h"

void controller::load_file()
{

}

void controller::set_central_projection()
{
    widget->projection = CENTRAL;
    widget->update();
}

void controller::set_parallel_projection()
{
    widget->projection = PARALLEL;
    widget->update();
}

void controller::set_vertices_type_none()
{
    widget->vert_type = 0;
    widget->update();
}

void controller::set_vertices_type_circle()
{
    widget->vert_type = CIRCLE;
    widget->update();
}

void controller::set_vertices_type_square()
{
    widget->vert_type = SQUARE;
    widget->update();
}

void controller::set_vertices_size(float size)
{
    widget->vert_size = size;
    widget->update();
}

void controller::set_vertices_color_rgb(float red, float green, float blue)
{
    widget->vert_color.setX(red);
    widget->vert_color.setY(green);
    widget->vert_color.setZ(blue);
    widget->update();
}

void controller::set_edges_type_solid()
{
    widget->edges_type = SOLID;
    widget->update();
}

void controller::set_edges_type_dotted()
{
    widget->edges_type = DOTTED;
    widget->update();
}

void controller::set_edges_size(float size)
{
    widget->edges_size = size;
    widget->update();
}

void controller::set_edges_color_rgb(float red, float green, float blue)
{
    widget->edge_color.setX(red);
    widget->edge_color.setY(green);
    widget->edge_color.setZ(blue);
    widget->update();
}

void controller::set_background_color_rgb(float red, float green, float blue)
{
    widget->back_color.setX(red);
    widget->back_color.setY(green);
    widget->back_color.setZ(blue);
    widget->update();
}

void controller::set_model_scale(float scale)
{

}

void controller::move_model_x(float movement)
{

}

void controller::move_model_y(float movement)
{

}

void controller::move_model_z(float movement)
{

}

void controller::rotate_model_x(float angle)
{

}

void controller::rotate_model_y(float angle)
{

}

void controller::rotate_model_z(float angle)
{

}

controller_facade::controller_facade(QObject *parent) : controller(parent) {
    // Здесь можно добавить код инициализации, если нужно
}

controller::controller(QObject *parent) : QObject(parent) {
    // Здесь можно добавить код инициализации, если необходимо
}

void controller::setOGLwidget(display *display)
{
    widget = display;
}

controller::controller() : QObject(nullptr) {
    // Реализация для конструктора без параметров
}


