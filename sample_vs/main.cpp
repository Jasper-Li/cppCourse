#include<iostream>

int main(void) {
    std::cout << "Hello World!\n";
    long int tag = __cplusplus;
    if (tag == 201703L) std::cout << "C++17\n";
    else if (tag == 201402L) std::cout << "C++14\n";
    else if (tag == 201103L) std::cout << "C++11\n";
    else if (tag == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
    return 0;
}
