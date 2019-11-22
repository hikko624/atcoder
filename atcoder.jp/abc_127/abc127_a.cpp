// abc127_a
#include "iostream"
#include "algorithm"

using namespace std;

int main(int argc, char *argv[])
{
  int a, b, ans = 0;
  cin >> a >> b;
  if (a >= 13) ans += b;
  else if (a >= 6 && a <= 12) ans += b/2;
  cout << ans << endl;
  return 0;
}
