// abc095_a
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  string s;
  int res = 700;
  cin >> s;
  for (int i = 0; i < 3; i++) {
    if (s[i] == 'o') {
      res += 100;
    }
  }
  cout << res << endl;
  return 0;
}
