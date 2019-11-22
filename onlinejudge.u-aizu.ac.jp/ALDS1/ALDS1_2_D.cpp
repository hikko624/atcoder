#include <iostream>
#include <vector>
using namespace std;
int cnt;

void insertionSort(int a[], int n, int g) {
  for (int i = g; i < n; i++) {
    int v = a[i];
    int j = i - g;
    while (j >= 0 && a[j] > v) {
      a[j+g] = a[j];
      j = j - g;
      cnt++;
    }
    a[j + g] = v;
  }
  return;
}

void shellSort(int a[], int n, vector<int> G) {
  for (int i = (int)G.size() - 1; i >= 0; i--) {
    insertionSort(a, n, G.at(i));
  }
  return;
}

int main(int argc, char *argv[])
{
  int n;
  cin >> n;
  int calc = 1;
  vector<int> G;
  while (calc <= n) {
    G.push_back(calc);
    calc = calc * 3 + 1;
  }
  int a[n];
  for(int i=0;i<n;++i){
    cin >> a[i];
  }
  shellSort(a, n, G);
  cout << G.size() << endl;
  for (int i = (int)G.size() - 1; i >= 0; i--) {
    cout << G[i];
    if(i == 0) cout << "\n";
    else cout << " ";
  }
  cout << cnt << endl;
  for(int i = 0; i < n; i++){
    cout << a[i] << endl;
  }
  return 0;
}
