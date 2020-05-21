#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N,M,X;cin>>N>>M>>X;
  int C[13];
  int A[13][13];
  
  for (int i=0;i<N;i++)
  {
    cin>>C[i];
    for (int j=0;j<M;j++)
    {
      cin>>A[i][j]; 
    }
  }
  
  int mn=pow(10,9);
  for (int bit=0;bit<(1<<N);bit++)
  {
    //集合bitを固定してその時の理解度の条件と
    //いくらかかるかを計算してミニマムを求めよう！
    int sum=0;
    vector<int> R(M);
    
    for (int k=0;k<N;k++)
    {
      if (bit & (1<<k)) 
      {
        sum += C[k];
        for (int i=0; i<M; i++)
        {
          R[i] += A[k][i];
        }
      }
    }
    
    int flag=1;
    for (int i=0;i<M;i++)
    {
      if (R[i]<X) flag = 0;
    }
    
    if (flag == 1)
    {
      mn= min(sum,mn); 
    }
    
  }
  if (mn == pow(10,9))
  {
    cout<<-1<<endl;
    return 0;
  }
  cout<<mn<<endl;
}

