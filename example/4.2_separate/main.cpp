#include<iostream>
#include"Square.h"
int main(void) {
    Square s1, s2{ 4.0 };
    std::cout << s1.getArea() << " " << s2.getArea() << std::endl;

    s1 = s2;
    std::cout << s1.getArea() << " " << s2.getArea() << std::endl;
    return 0;
}
