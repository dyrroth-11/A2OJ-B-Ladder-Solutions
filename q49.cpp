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
cin>>n;
int arr[9];
int x=M,me;
for(int i=0;i<9;i++){cin>>arr[i]; if(x>=arr[i]){
    x=arr[i];
    me=i+1;
}
}
 
//cout<<x<<"--------\n";
if(n<x){cout<<"-1\n";return 0;}
int m=int(n/x);
int ans[m]={};
for(int i=0;i<m;i++){ans[i]=me;n-=x;}
for(int i=0;i<m;i++){
    int mn=0,e;
    for(int j=0;j<9;j++){
        if((arr[j]-x)<=n){
            mn=(arr[j]-x);
            e=j+1;
        }
    }
    ans[i]=e;
    n-=mn;
}
for( auto x:ans) cout<<x;
}
return 0;
}
 
/*_*/