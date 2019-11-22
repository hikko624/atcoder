// tenka12019_c
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  int n, count1=0, count2=0;
  string s1, s2;
  cin >> n >> s1;
  s2 = s1;
  for (int i = 0; i < n - 1; i++) {
    if (s1[i] == '#' && s1[i + 1] == '.') {
      count1++;
      s1[i+1] = '#';
    }
  }
  for(int j = n-1; j > 1; j--) {
    if (s2[j] == '.' && s2[j - 1] == '#') {
      count2++;
      s2[j-1]='.';
    }
  }
  cout << min(count1, count2) << endl;
  return 0;
}
