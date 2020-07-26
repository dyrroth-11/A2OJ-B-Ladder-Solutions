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
int p[n][2];
for(int i=0;i<n;i++){
    p[i][0]=0;
    p[i][1]=INT_MAX;
}
for(int j=0;j<m;j++){
    int l,r,t,c;
    cin>>l>>r>>t>>c;
    l--;r--;
    for(int i=l;i<=r;i++){
        if(p[i][1]>t){
            p[i][0]=c;
            p[i][1]=t;
        }
    }
}
ll ans=0;
for(auto x:p){
    ans+=x[0];
}
cout<<ans<<"\n";
}
return 0;
}
 
/*_*/