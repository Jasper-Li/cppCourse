#include<iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Parse{
    string s;
    string::size_type idx_spt = std::string::npos;

public:
    Parse(string s_) {
        s = s_;
        idx_spt = s.find('-'); 
    }
    int getFirst() {
        string buf = s.substr(0, idx_spt);
        int first = std::stoi(buf);
        return first;
    }
    int getLast() {
        string buf = s.substr(idx_spt+1);
        int last = std::stoi(buf);
        return last;
    }
};
int main() {
  std::string s{};
  std::cin >> s;  // 用户输入一个范围字符串
  Parse p(s);     // 构造Parse对象p，同时解析字符串 s
  std::cout << p.getFirst() << ' ' << p.getLast(); // 中间是两个单引号括起来的一个空格字符
  return 0;
}
