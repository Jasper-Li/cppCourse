#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(void) {
    int a[] = {1, 5, 8, 10};

    for (auto i : a) {
        cout << i << endl;
    }
    return 0;
}
