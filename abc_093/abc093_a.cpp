// abc093_a
#include <iostream>
using namespace std;

template<class T> bool contain(const std::string& s, const T& v) {
  return s.find(v) != std::string::npos;
}

int main(int argc, char *argv[])
{
  string s;
  cin >> s;
  if(contain(s, 'a') && contain(s, 'b') && contain(s, 'c')){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
