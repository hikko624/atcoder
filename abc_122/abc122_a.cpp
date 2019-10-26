// abc122_a
#include "iostream"
using namespace std;

int main(int argc, char *argv[])
{
  char b;
  cin >> b;
  if(b == 'A') cout << 'T' << endl;
  else if(b == 'T') cout << 'A' << endl;
  else if(b == 'G') cout << 'C' << endl;
  else cout << 'G' << endl;
  return 0;
}
