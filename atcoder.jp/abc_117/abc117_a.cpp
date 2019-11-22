// abc117_a
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(int argc, char *argv[])
{
  int t, x;
  cin >> t >> x;
  double ans;
  ans = (double)t / x;
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}
