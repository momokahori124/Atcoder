#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;cin>>N;
  vector<vector<int>> E(N+1);
  for(int i=2;i<=N;i++)
  {
    int a;cin>>a;
    E[a].push_back(i);
  }
  
  for(int i=1;i<=N;i++)
  {
    cout<< E[i].size()<<endl; 
  }
}

