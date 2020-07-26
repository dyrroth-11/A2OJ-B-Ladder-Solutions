#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
#define xx first
#define yy second
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
int n,m;
cin>>n>>m;
int a[1001];
memset(a,0,sizeof(a));
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    a[x]=a[y]=1;
 
}
cout<<n-1<<"\n";
int i=1;
while(a[i])i++;
for(int j=1;j<=n;j++){
if(i!=j)cout<<i<<" "<<j<<"\n";
}
}
return 0;
}
 
/*_*/