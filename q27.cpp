#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,ans=2,cnt=2,flag=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
if(n<=2){cout<<n;return 0;}
for(int i=0;i<n-2;i++){
    while(arr[i]+arr[i+1]==arr[i+2]){
        cnt++;i++;
        flag=1;
    }
    if(flag){i--;flag=0;}
    ans=max(cnt,ans);
    cnt=2;
 
}
cout<<ans;
    return 0;
}