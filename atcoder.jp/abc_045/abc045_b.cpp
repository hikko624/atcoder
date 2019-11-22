// abc045_b
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<unordered_map>
#include<utility>
#include<cmath>
#include<random>
#include<cstring>
#include<queue>
#include<stack>
#include<bitset>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<typeinfo>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define FOR(i,a) for(auto i:a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
#define show1d(v) rep(i,v.size())cout<<" "<<v[i];cout<<endl<<endl;
#define show2d(v) rep(i,v.size()){rep(j,v[i].size())cout<<" "<<v[i][j];cout<<endl;}cout<<endl;
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<Def,pii> pip;
typedef vector<pip>vip;
template<typename A,typename B>bool cmin(A &a,const B &b){return a>b?(a=b,true):false;}
template<typename A,typename B>bool cmax(A &a,const B &b){return a<b?(a=b,true):false;}
const double PI=acos(-1);
const double EPS=1e-9;
Def inf = sizeof(Def) == sizeof(long long) ? 2e18 : 1e9+10;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int main(int argc, char *argv[])
{
  char c = 'a';
  string s1,s2,s3;
  int i1=0,i2=0,i3=0;
  cin>>s1>>s2>>s3;
  while(true) {
    if(s1.size() == i1 && c == 'a') {
      cout << "A" << endl;
      break;
    } else if(s2.size() == i2 && c == 'b') {
      cout << "B" << endl;
      break;
    } else if(s3.size() == i3 && c == 'c'){
      cout << "C" << endl;
      break;
    } else {
      if(c == 'a') {
        c = s1[i1];
        i1++;
      } else if(c == 'b') {
        c = s2[i2];
        i2++;
      } else {
        c = s3[i3];
        i3++;
      }
    }
  }
  return 0;
}
