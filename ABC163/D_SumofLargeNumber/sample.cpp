#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
using Graph = vector<vector<ll>>;
using P = pair<int,int>;
#define MOD 1000000007
#define INF 1000000
#define PI 3.14159265358979323846

ll S[200020];

//a-bまでの和は、S[b]-S[a-1]
void init()
{
  S[0]=0;
  for (int i=1;i<=200010;i++)
  {
    S[i] = S[i-1]+i;
  }
}

int main()
{
  ll N,K;cin>>N>>K;
  
  init();

  ll up=0;
  ll down=0; 
  ll diff=0;
  ll count =0;
  for (int k=K;k<=N+1;k++)
  {
    //k個選ぶとする
    //下からk個足した数
    down = S[k-1];
    //上からk個足した数
    up = S[N]-S[N-k];
    //cout<<"up:"<<up<<" down:"<<down<<endl; 
    diff = up - down + 1;
    count += diff;
    count %= MOD;
  }
  cout<<count<<endl;
}

