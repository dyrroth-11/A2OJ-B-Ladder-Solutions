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
int p[MM];
void seive(){
  for(int i=2;i<MM;i++){
    if(p[i]==0){
        for(int j=i;j<MM;j+=i)p[j]=i;
    }
  }
  return ;
}
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
seive();
//cin>>T;
while(T--){
ll s,k;
cin>>s>>k;
ll l=1;
vector<ll> v,ans;
v.pb(1);
while(true)
{
    ll x=0;
    for(int i=l-1;(i>=0)&&(l-i<=k);i--)x+=v[i];
    if(x>s)break;
    v.pb(x);
    l++;
}
l--;
ans.pb(0);
while(s>0){
    while(v[l]>s)l--;
    s-=v[l];
    ans.pb(v[l]);
}
cout<<ans.size()<<"\n";
for(auto x:ans)cout<<x<<" ";
}
return 0;
}
 
/*_*/