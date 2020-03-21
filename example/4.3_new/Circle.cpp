#include "Circle.h"
Circle::Circle(double s) {
    radius = s;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}
