#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N,M;cin>>N>>M;
  vector<int> A(M);
  int sum=0;
  for(int i=0;i<M;i++)
  {
    cin>>A[i];
    sum += A[i];
  }
  
  if(sum > N)
  {
    cout<<-1<<endl;
    return (0);
  }
  
  cout<< N - sum<<endl;

}

