#include "rectangle.h"

Rectangle::Rectangle(double w, double h, std::string_view descripton)
    : m_width{w}, m_height{h}, Shape{descripton} {}
