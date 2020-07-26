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
int n;
long double vb,vs,x,y;
cin>>n>>vb>>vs;
double arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
cin>>x>>y;
int ans;long double mn=10000000.0;
for(int i=1;i<n;i++){
    double a,b,c;
    a=arr[i]/vb;
    c=sqrt(y*y + (x-arr[i])*(x-arr[i]));
    b=c/vs;
    if(mn>=(b+a)){
        mn=b+a;
        ans=i+1;
    }
}
cout<<ans<<"\n";
}
return 0;
}
 
/*_*/