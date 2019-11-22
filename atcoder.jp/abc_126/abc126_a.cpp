#include <iostream>
#include <string>
#include <locale>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  int n, k;
  string s;
  cin >> n >> k >> s;
  s[k-1] = tolower(s[k-1]);
  cout << s << endl;
  return 0;
}
