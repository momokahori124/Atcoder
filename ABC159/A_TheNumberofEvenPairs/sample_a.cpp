#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n,m;cin>>n>>m;
  int ans;
  ans = n*(n-1)+m*(m-1);
  ans /= 2;
  cout<<ans <<endl;
}

