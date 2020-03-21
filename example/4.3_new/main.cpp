#include<iostream>
#include"Circle.h"
using std::cin;
using std::cout;
using std::endl;
int main(void) {
    Circle sa[3]{{}, 3.0, 4.0};
/*
1. 不可用 new Circle[10](1.0);
compile error: array 'new' cannot have initialization arguments
2. 都初始化为 0，不修改Circle默认值的前提下，目前想到的是：
    auto ps = new Circle[10]{
        0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0,
    };

*/
//    auto ps = new Circle[10](1.0);

    //compile pass
    auto ps = new Circle[10]{
        0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0,
    };

    Circle s1;
    cout << "default: " << s1.getArea() << endl;


    for(Circle x: sa) {
        cout << x.getArea() << endl;
    }

    for (int i=0; i<10; i++) {
        cout << i << " " << ps[i].getArea() << endl;
    }

    return 0;
}
