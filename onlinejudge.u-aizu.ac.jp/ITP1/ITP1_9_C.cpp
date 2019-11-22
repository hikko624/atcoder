#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int n, t_sc = 0, h_sc = 0;
  string taro, hanako;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> taro >> hanako;
    if(taro == hanako){
      t_sc++;
      h_sc++;
    }
    else if (taro > hanako) {
      t_sc+=3;
    } else if (hanako > taro) {
      h_sc+=3;
    }
  }
  cout << t_sc << " " << h_sc << endl;
  return 0;
}
