#include <bits/stdc++.h>
# define P 3.1415926536
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n;
cin>>n;
double ans=0;
int arr[n+1]={};
for(int i=1;i<=n;i++)cin>>arr[i];
sort(arr,arr+(n+1),greater<int>());
for(int i=0;i<n;i+=2)
{  
    ans+=(double)P*(arr[i]*arr[i]-arr[i+1]*arr[i+1]);
}
cout<<fixed<<setprecision(10)<<ans;
    return 0;
}