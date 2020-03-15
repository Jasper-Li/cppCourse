#include<iostream>

int main(void) {
    char a, b;
    char line[15];
    std::cin >> a;
    b = std::cin.get();
    std::cin >> line;
    std::cout << "b" << b;
    std::cout << "line:"<< line;
    std::cout << "end";
    return 0;
}
