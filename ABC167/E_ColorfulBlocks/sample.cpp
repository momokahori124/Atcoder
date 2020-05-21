#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const ll MOD = 998244353;
const int MAX = 200002;

vector<ll> fac(MAX);

void COMinit()
{
  fac[0]=1;
  for (ll i=1;i<=MAX;i++)
  {
    fac[i]=(fac[i-1]*i) % MOD; 
  }
}

ll fast(ll a, ll n)
{
  ll ret=1;
  while (n>0)
  {
    if (n & 1)
    {
      ret = (ret * a) % MOD;
    }
    n = (n>>1);
    a = a * a % MOD;
  }
  return (ret);
}
 
ll comb(ll n, ll r)
{
  ll top=1;
  ll bot=1;
  ll ans;
  
  if (n<r || n<0 || r<0) return (0);
  
  top = fac[n];
  bot = fac[r]*fac[n-r] % MOD;
  ans = top * fast(bot,MOD-2) % MOD;
  return (ans);
}

int main()
{
  int N,M,K;
  cin>>N>>M>>K;
  
  COMinit();
  
  ll ans=0;
  for (int i=0;i<=K;i++)
  {
    ll sum = M*fast(M-1,N-i-1) % MOD;
    sum *= comb(N-1,i);
    sum %= MOD;
    ans += sum;
    ans %= MOD;
  }
  cout<<ans<<endl;
}

