#include<iostream>
using std::cin;
using std::cout;
void f(int a, int b =1, int c =2) {
    cout<<"f1";
}
void f(int a, int b =3) {
    cout<<"f2";
}
void testx() {
char* p = new char(32);
//delete p;
free(p);

    f(3, 1, 1);
}

void test1() {
int x[] {3, 5, 7};
auto sum{0};
//for( i in x )
for( int i = 0; i< 3; i++ )
  sum+=*(x+i);
cout << sum;
}
int main2(void) {
//    auto array[] {1.0, 2.0};
//    int y{0}, &x {y};
test1();
    return 0;
}
int i = 1;
int main() {
  for (int i = 0; i < 5; i++) {
    ::i += i;
  }
  std::cout << ::i;
  return 0;
}
