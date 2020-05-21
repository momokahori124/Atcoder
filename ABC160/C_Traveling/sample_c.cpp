#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;

int main()
{
  ll K,N;cin>>K>>N;
  vector<ll> A(N);
  for (int i=0;i<N;i++)
    cin>>A[i];
  
  vector<ll> B(N);
  ll mx=0;
  for (int i=0;i<N;i++)
  {
    if (i==0) B[0]=K-A[N-1]+A[0];
    else B[i] = A[i]-A[i-1];
    
    mx = max(mx,B[i]);
    //cout<<"B["<<i<<"]="<<B[i]<<endl;
  }
  cout<<K-mx<<endl;
 
}

