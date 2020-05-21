#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll N,K;cin>>N>>K;
  vector<int> A(N);
  for (int i=0;i<N;i++)
  {
    cin>>A[i];
    A[i]--;
  }
  
  int now=0;
  vector<int> first(N,0);
  first[0]++;
  for (ll i=0;i<K;i++)
  {
    now=A[now];
    first[now]++;
    if (first[now]==3)
    {
       break;
    }
  }
  
  ll s=0;
  ll t=0;
  for (int i=0;i<N;i++)
  {
     if (first[i]==1)
       s++;
     else if (first[i]>=2)
       t++;
  } 
  //cout<<s<<" "<<t<<endl;
  
  if (K<=s)
  {
    now=0;
    for (ll i=0;i<K;i++)
     now=A[now];
    cout<<now+1<<endl;
    //cout<<"---"<<endl;
    return 0;
  }
  
  if (K<=N)
  {
    now=0;
    for (ll i=0;i<K;i++)
     now=A[now];
    cout<<now+1<<endl;
    //cout<<"===="<<endl;
    return 0;
  }
  
  ll p = (K-s) % t;
  
  now=0;
  for (int i=0;i<s;i++)
    now=A[now];
  
  for (int i=0;i<p;i++)
  {
    now=A[now];
  }
  cout<<now+1<<endl;
}

