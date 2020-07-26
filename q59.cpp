#include <bits/stdc++.h>
using namespace std;
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 long long p,d,ans,cnt=10;
    cin>>p>>d;
    ans=++p;
    while(p%cnt<=d)
    {   ans=p-p%cnt;
        cnt*=10;
        }
    cout<<ans-1;
return 0;
 
}