// abc123_a
#include "iostream"
using namespace std;

int main(int argc, char *argv[])
{
  int a[5],k;
  for(int i=0;i<5;i++) cin >> a[i];
  cin >> k;

  if(a[4]-a[0]>k) cout << ":(" << endl;
  else cout << "Yay!" << endl;

  return 0;
}
