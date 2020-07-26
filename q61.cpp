#include <bits/stdc++.h>
using namespace std;
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,ans=100000;
cin>>n;
int arr[n+1];
for(int i=1;i<=n;i++)cin>>arr[i];
for(int i=1;i<n;i++){
    ans=min(ans,max(arr[i],arr[i+1]));
}
ans=min(arr[1],min(arr[n],ans));
cout<<ans;
return 0;
 
}