// abc094_a
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int a, b, x;
  cin >> a >> b >> x;
  cout << ((a+b>=x && a<=x) ? "YES" : "NO") << endl;
  return 0;
}
