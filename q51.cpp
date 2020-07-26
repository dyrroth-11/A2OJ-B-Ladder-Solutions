#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int d,n,t;
cin>>d>>n;
int ans=0;
for(int i=0;i<n-1;i++){
    cin>>t;
    ans+=(d-t);
}
cout<<ans;
return 0;
 
}