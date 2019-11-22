// abc103_a
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  cout << max({a1, a2, a3}) - min({a1, a2, a3}) << endl;
  return 0;
}
