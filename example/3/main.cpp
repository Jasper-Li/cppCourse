#include<iostream>
using std::cin;
using std::cout;
void printArea(double r=1);

int main(void) {
	printArea();
	printArea(4);
    return 0;
}
void printArea(double r) {
    cout << r << std::endl;
}
