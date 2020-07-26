#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,k;
cin>>n>>k;
if(k==n) {cout<<-1; return 0;}
cout<<n-k<<" ";
 
for(int i=1;i<=n;i++){
if(i!=n-k) cout<<i<<" ";
 
}
return 0;
 
}