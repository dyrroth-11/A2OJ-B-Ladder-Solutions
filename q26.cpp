#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,m;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<m;i++)cin>>b[i];
sort(b,b+m);
int j=0;
for(int i=0;i<m;i++){
    if(a[j]<=b[i]&&j<n)j++;
}
cout<<n-j;
    return 0;
}