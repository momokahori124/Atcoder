#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int kaibun(string s)
{
  int l=s.size();
  for (int i=0;i<l/2;i++)
  {
     if (s[i]!=s[l-i-1])
     {
       return (0);
     }
  }
  return (1);
}

int main()
{
  string s;cin>>s;
  int l=s.size();
  
  if (kaibun(s)==0)
  {
    cout<<"No"<<endl;
    return (0);
  }
  
  string t,u;
  for (int i=0;i<l;i++)
  {
    if (i<((l-1)/2)) t+=s[i];
    else if((l-1)/2<i) u+=s[i]; 
  }
  
  if (kaibun(t)==0 || kaibun(u)==0)
  {
    cout<< "No"<<endl;
    return (0);
  }
  
  cout<<"Yes"<<endl; 
}

