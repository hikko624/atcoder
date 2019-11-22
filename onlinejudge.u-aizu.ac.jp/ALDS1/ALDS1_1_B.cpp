#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y)
{
  int mx = max(x,y);
  int my = min(x,y);
  return my ? gcd(my, mx%my) : mx;
}

int main(int argc, char *argv[])
{
  int x, y;
  cin >> x >> y;
  cout << gcd(x, y) << endl;
  return 0;
}
