#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
using Graph = vector<vector<ll>>;
using P = pair<int,int>;
#define MOD 1000000007
#define INF 1000000
#define PI 3.14159265358979323846

ll nC2[200020];

ll init()
{
  nC2[0]=0;
  nC2[1]=0;
  for (ll i=2;i<=200010;i++)
  {
    nC2[i]=i*(i-1)/2; 
  }
}

int main()
{
  ll N;cin>>N;
  vector<ll> A(N+1);
  vector<ll> ball(N+1);
  for (ll i=1;i<=N;i++)
  {
    cin>>A[i];
    ball[A[i]]++;
  }
  
  init();
  
  vector<ll> cnt(N+1,0);
  
  ll count=0;
  for (ll i=1;i<=N;i++)
  {
    count += nC2[ball[i]];
  }
  
  for (ll i=1;i<=N;i++)
  {
      cout<< count-(ball[A[i]]-1)<<endl;
  }
}

