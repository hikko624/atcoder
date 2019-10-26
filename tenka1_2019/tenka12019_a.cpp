// tenka12019_a

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int a, b, c;
  cin >> a >> b >> c;
  if((a < c && c < b) || (b < c && c < a)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
