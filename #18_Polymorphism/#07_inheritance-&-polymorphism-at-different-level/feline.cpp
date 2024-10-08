#include "feline.h"

Feline::Feline(std::string_view fur_style, std::string_view description)
: m_fur_style(fur_style), Animal(description) 
{}

Feline::~Feline(){}
