#pragma once

//_Pragma("once"); // VS 2019 doesn't support it.
class Circle {
private:
    double radius = 1.0;
public:
    Circle() = default;
    Circle(double r);
    double getArea();
};
