#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,m, temp=1,a;
long long ans=0;
cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>a;
    if(a>=temp) ans+=(a-temp);
    else ans+=(n-temp+a);
    temp=a;
}
cout<<ans;
    return 0;
}