#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

int main()
{
  ll x;cin>>x;
  
  ll a=0;
  ll b=0;
  while (500*a<=x)
  {
    a++; 
  }
  a--;
  while (5*b<=x-500*a)
  {
    b++; 
  }
  b--;
  cout<<1000*a+5*b<<endl;
}

