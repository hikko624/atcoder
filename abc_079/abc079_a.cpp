// abc079_a
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int n, one, ten, hand, thou;
  cin >> n;
  one = n%10;
  n/=10;
  ten = n%10;
  n/=10;
  hand = n%10;
  n/=10;
  thou = n%10;
  if((one == ten && ten == hand)||(ten == hand && hand == thou)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
