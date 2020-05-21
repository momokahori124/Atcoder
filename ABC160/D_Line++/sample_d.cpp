#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

int min3(int i,int j, int X, int Y)
{
  int m;
  m = min(abs(j-i),abs(i-Y)+1+abs(X-j));
  m = min(m,abs(i-X)+1+abs(Y-j));
  return (m);
}

int main()
{
  int N,X,Y;cin>>N>>X>>Y;
  X--,Y--;
  
  map<int,int> m;
  for (int i=0;i<N-1;i++)
  {
    for (int j=i+1;j<N;j++)
    {
      int d;
      d=min3(i,j,X,Y);
      m[d]++;
      //cout<<"("<<i<<","<<j<<")="<<d<<endl;
    }
  }
  for (int i=1;i<N;i++)
    cout<<m[i]<<endl;
}

