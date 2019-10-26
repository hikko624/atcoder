// abc109_a
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int a, b;
  cin >> a >> b;

  if (a % 2 && b % 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
