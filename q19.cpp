#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
int n;
cin>>n;
int arr[n][2],a[100010]={};
for(int i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1];
    a[arr[i][0]]++;}
 
for(int i=0;i<n;i++){
    cout<<n-1+a[arr[i][1]]<<" "<<n-1-a[arr[i][1]]<<"\n";
}
   return 0;
}