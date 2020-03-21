#include<iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Parse{
    string s;
    string::size_type idx_spt = std::string::npos;
    string digit{"0123456789"};

public:
    Parse(string s_) {
        s = s_;
        idx_spt = s.find('-'); 
    }
    int getDigit(string & buf) {
        string::size_type start = buf.find_first_of(digit);
        string::size_type end = buf.find_last_of(digit);
        string::size_type count = end - start + 1; 
        string num = buf.substr(start, count);
        int val = std::stoi(num);
        return val;
    }
    int getFirst() {
        string buf = s.substr(0, idx_spt);
        int val = getDigit(buf); 
        return val;
    }
    int getLast() {
        string buf = s.substr(idx_spt+1);
        int val = getDigit(buf); 
        return val;
    }
};
int main() {
  std::string s{};
  std::cin >> s;  // 用户输入一个范围字符串
  Parse p(s);     // 构造Parse对象p，同时解析字符串 s
  std::cout << p.getFirst() << ' ' << p.getLast(); // 中间是两个单引号括起来的一个空格字符
  return 0;
}
/*testdata
ab@r$&+fe321ab@r$&+f-@@@+54103@@@+==fsa.~
*/
