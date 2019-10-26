// abc101_a
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  int n = 0;
  string s;
  cin >> s;
  for (int i = 0; i < 4; ++i) {
    if(s[i] == '+') n++;
    else n--;
  }
  cout << n << endl;
  return 0;
}
