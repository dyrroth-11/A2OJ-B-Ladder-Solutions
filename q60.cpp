#include <bits/stdc++.h>
using namespace std;
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n;
long long int ans=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
for(int i=0;i<n-1;i++){
    if(arr[i+1]<arr[i]){ans+=(arr[i]-arr[i+1]);}
}
cout<<ans;
return 0;
 
}