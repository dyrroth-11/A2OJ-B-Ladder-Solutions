#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,m,ans=0,cnt=0;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];
if(arr[i]<0)cnt++;}
sort(arr,arr+n);
m=min(m,cnt);
for(int i=0;i<m;i++){
    ans-=arr[i];
}
cout<<ans;
    return 0;
}