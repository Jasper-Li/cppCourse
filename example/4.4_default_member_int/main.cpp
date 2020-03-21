#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Sample {
public:
    int a = 1;
    int b = {2};
    int c{3};

    std::string s1 {'H', 'e', 'l'};
    std::string s2{"Hello"};
    std::string s3 = "world";

    int arr1 [3] = {1, 2, 3};
    int arr2 [4] {1};
    double arr3[3] {11,0, 10.5};
};

void print_dbl_array(const double arr[], const unsigned len) {
    for (int i = 0; i<len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void print_array(const int arr[], const unsigned len) {
    for (int i = 0; i<len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void) {
    Sample s;
    cout << s.a << ' ' << s.b << ' ' << s.c << endl
         << s.s1 << ' ' << s.s2 << ' ' << s.s3 << endl;
    print_array(s.arr1, 3);
    print_array(s.arr2, 4);
    print_dbl_array(s.arr3, 3);
    return 0;
}
