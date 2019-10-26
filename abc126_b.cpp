#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
  int s;
  cin >> s;
  int aa=s/100, bb=s%100;
  if((aa<=12 && bb<=12) && (aa > 0 && bb > 0)) cout << "AMBIGUOUS" << endl;
  else if(aa<=12 && aa > 0) cout << "MMYY" << endl;
  else if(bb<=12 && bb > 0) cout << "YYMM" << endl;
  else cout << "NA" << endl;
  return 0;
}
