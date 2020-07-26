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
int n,k;
cin>>n>>k;
string arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
map<pair<string,string>,int> m;
while(k--){
    string a,b;
    cin>>a>>b;
    m[mk(a,b)]=1;
    m[mk(b,a)]=1;
}
int mx=0,ans;
for(int i=0;i<(1<<n);i++){
    vector<string> v;
    for(int j=0;j<n;j++){
        if(i&(1<<j))v.pb(arr[j]);
    }
        for(int ii=0;ii<v.size();ii++){
            for(int jj=ii+1;jj<v.size();jj++){
                if(m[mk(v[ii],v[jj])]==1 ||  m[mk(v[jj],v[ii])]==1 ){
                    goto ed;
                }
            }
    }
    if(v.size()>mx){
        mx=v.size();
        ans=i;
    }
    ed://cout<<i<<" "<<v.size()<<"===\n";
        continue;
}
vector<string> x;
for(int i=0;i<n;i++){
    if(ans&(1<<i))x.pb(arr[i]);
}
sort(x.begin(),x.end());
cout<<x.size()<<"\n";
for(auto i : x){
    cout<<i<<"\n";
}
}
return 0;
}
 
/*_*/