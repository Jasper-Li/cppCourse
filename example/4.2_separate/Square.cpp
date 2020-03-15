#include "Square.h"
Square::Square(double s) {
    side = s;
}
double Square::getArea() {
    return side * side;
}