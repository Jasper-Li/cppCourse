#include<iostream>
#include<limits>
using std::cin;
using std::cout;
char min( char c1, char c2 ) {
    return c1 < c2 ? c1 : c2;
}
char min( char c1, char c2, char c3 ) {
    auto tmp = c1 < c2 ? c1 : c2;
    return tmp < c3 ? tmp : c3;
}
int min( int i1, int i2) {
    return i1 < i2 ? i1 : i2;
}
int min( int i1, int i2, int i3){
    auto tmp = i1 < i2 ? i1 : i2;
    return tmp < i3 ? tmp : i3;
}

int main(void) {
    auto x1 = '[', x2 = 'N';
    auto y1 = 'G', y2 = '9', y3 = '*';
    auto a1 = -42, a2 = 0;
    auto b1 = 42, b2 = 0, b3=std::numeric_limits<int>::min();

    auto min1 = min(x1, x2);
    auto min2 = min(y1, y2, y3);
    auto min3 = min(a1, a2);
    auto min4 = min(b2, b2, b3);  

    cout << min1 << " " << min2 << " "
         << min3 << " " << min4;

    return 0;
}
