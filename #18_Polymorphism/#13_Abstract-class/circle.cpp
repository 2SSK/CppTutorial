#include "circle.h"

Circle::Circle(double r, std::string_view description)
    : m_radius{r}, Shape{description} {}
