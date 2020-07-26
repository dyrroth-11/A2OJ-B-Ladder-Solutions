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
ll x,y,n,num,den;
cin>>x>>y>>n;
long double d=(x*1.0)/y, dif=10000000.0;
for(int i=1;i<=n;i++){
    ll l=(x*i)/y;
    ll r=l+1;
    long double temp=l*1.0/i;
    if(abs(temp-d)<dif)
    {
        dif=abs(temp-d);
        num=l;den=i;
    }
    temp=r*1.0/i;
     if(abs(temp-d)<dif)
    {
        dif=abs(temp-d);
        num=r;den=i;
    }
}
cout<<num<<"/"<<den<<"\n";
}
return 0;
}
 
/*_*/