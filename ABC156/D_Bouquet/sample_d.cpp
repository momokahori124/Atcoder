#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

//二分累乗法で高速化
ll fast(ll a, ll n)
{
  ll ret=1;
  while (n>0)
  {
    if (n & 1)
    {
      ret = ret * a % MOD;
    }
    n = (n>>1);
    a = a * a % MOD;
  }
  return (ret);
}

//combination
//階乗を別に前処置しておくともっと早く求められるが今回は出番少ないので省略
ll comb(ll n, ll r)
{
  ll top=1;
  ll bot=1;
  ll ans;
  while (r>0)
  {
    top *= n; top %= MOD;
    bot *= r; bot %= MOD;
    n--; r--;
    //cout<<top<<" "<<bot<<endl;
  }
  ans = top * fast(bot,MOD-2) %MOD;
  return (ans);
}

int main()
{
  ll n,a,b;cin>>n>>a>>b;
   //2^n - 1 - nCa -nCbを出力したい
  ll ans = fast(2,n) - 1;
  ans %= MOD;
  ans = ans - comb(n,a) + MOD;
  ans %= MOD;
  ans = ans - comb(n,b) + MOD;
  ans %= MOD;
  cout<<ans<<endl;
}

