#include<iostream>
using std::cin;
using std::cout;
class Square{
    private:
    double side = 1.0;

    public:
    Square() = default;
    Square(double side) {
        this->side = side;
    }
    double getArea() {
        return (side *side);
    }
};
int main(void) {
    Square s1, s2{4.0};
    cout << s1.getArea() << " " << s2.getArea() << std::endl;
    s1 = s2;
    cout << s1.getArea() << " " << s2.getArea() << std::endl;
    return 0;
}
