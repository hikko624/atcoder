#include <iostream>
using namespace std;

struct Card {
  char mark;
  int value;
};

int bubbleSort(Card card[], int n) {
  int count=0;
  Card tmpc;
  for(int i = 0;i<n;++i) {
    for (int j = n - 1; j > i; --j) {
      if (card[j].value < card[j - 1].value) {
        tmpc=card[j];
        card[j]=card[j-1];
        card[j-1]=tmpc;
        count++;
      }
    }
  }
  return count;
}

int selectionSort(Card card[], int n) {
  int count=0;
  Card tmpc;
  for(int i=0;i<n;++i){
    int minj=i;
    for (int j = i; j < n; ++j) {
      if (card[j].value < card[minj].value) {
        minj=j;
      }
    }
    if (i != minj) {
      tmpc=card[i];
      card[i]=card[minj];
      card[minj]=tmpc;
      count++;
    }
  }
  return count;
}

bool isStable(struct Card bS[], struct Card sS[], int n) {
  for(int i=0;i<n;++i){
    if(bS[i].mark!=sS[i].mark || bS[i].value!=sS[i].value) return false;
  }
  return true;
}

void print(struct Card card[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << card[i].mark << card[i].value;
    if (i != n - 1)
      cout << " ";
    else
      cout << "\n";
  }
}

int main(int argc, char *argv[])
{
  int n;
  cin>>n;
  Card card1[n], card2[n];
  string s;
  for(int i=0;i<n;++i){
    cin>>s;
    card1[i].mark=s[0];
    card1[i].value=(int)s[1]-'0';
  }
  for(int i=0;i<n;++i){
    card2[i]=card1[i];
  }
  selectionSort(card1, n);
  bubbleSort(card2, n);
  print(card2, n);
  cout<<"Stable"<<endl;
  print(card1, n);
  cout<<(isStable(card1, card2, n) ? "Stable" : "Not stable") << endl;

  return 0;
}
