#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s,t;cin>>s>>t;
  int ls=s.size();
  int lt=t.size();
    for (int i=0;i<ls;i++)
    {
      if (s[i]!=t[i])
      {
         cout<<"No"<<endl;
        return 0;
      }
    }
  cout<<"Yes"<<endl;
}

