#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int r;
  int in;
  
  cin >> n >> r;
  if (n >= 10)
    in = r;
  else 
    in = r + 100 * (10 - n);
  
  cout << in << endl;
}

