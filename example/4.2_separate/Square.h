#pragma once

//_Pragma("once"); // VS 2019 doesn't support it.
class Square {
private:
    double side = 1.0;
public:
    Square() = default;
    Square(double s);
    double getArea();
};
