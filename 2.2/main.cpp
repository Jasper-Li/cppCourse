#include<iostream>

using std::cout;
using std::endl;

namespace NS1 {
    const int x = 1;
}

namespace NS2 {
    const int x = 2;
}

int main(void) {
    cout << NS1::x << endl;
    cout << NS2::x;
    return 0;
}
