// abc115_a
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int d;
  cin >> d;
  cout << "Christmas";
  for (int i = 25 - d; i > 0; i--) {
    cout << " Eve";
  }
  cout << endl;
  return 0;
}
