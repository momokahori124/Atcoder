#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int k;
  int count;
  
  cin >> n >> k;
  count = 0;
  while (n > 0)
  {
    n /= k;
    count++;
  }
  cout << count << endl;
}

