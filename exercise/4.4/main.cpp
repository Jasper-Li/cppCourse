#include<iostream>
#include<array>
using std::cin;
using std::cout;
using std::endl;
class Circle{
    double radius=1.0;
public:
    Circle() = default;
    Circle(double r) {
        radius = r;
    };
    double getArea() {
        return 3.14 * radius * radius;
    }
};
int main(void) {
    std::array<Circle, 10> circleArr{1.0, 2.0, 3.0, 4.0, 5.0};
    double sumArea{0.0};
    for (Circle c: circleArr) {
        sumArea += c.getArea();
    }
    cout << sumArea;
    return 0;
}
