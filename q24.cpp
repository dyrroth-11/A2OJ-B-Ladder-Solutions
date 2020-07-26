#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int n,k,ma=0,mi=101;
 cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++){
        cin>>arr[i];
    mi=min(mi,arr[i]);
    ma=max(ma,arr[i]);
 
 }
 if((ma-mi)>k){cout<<"NO";return 0;}
 cout<<"YES\n";
for(int i=0;i<n;i++){
    for(int j=1;j<=arr[i];j++){
        if(j%k==0)cout<<k<<" ";
        else cout<<j%k<<" ";
    }
    cout<<"\n";
}
    return 0;
}