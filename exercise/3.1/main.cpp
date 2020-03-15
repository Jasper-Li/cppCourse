#include<iostream>
using std::cin;
using std::cout;
int swap(int& x, int &y, int &z) {
    auto tmp = x;
    tmp = z;
    z = y;
    y = x;
    x = tmp;

    auto max = x;
    max = y > max ? y : max;
    max = z > max ? z : max;
    return max;
}

int main(void) {
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;
    
    auto max = swap(a, b, c);
    cout << max << " " << a << " " << b << " " << c;
    return 0;
}
