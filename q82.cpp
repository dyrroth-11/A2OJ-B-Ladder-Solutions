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
//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
int T=1;
//cin>>T;
while(T--){
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
for(int i=1;i<13;i++)m[i]+=m[i-1];
int n;
cin>>n;
int arr[465]={};
while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=100+m[a-1]+b;
    arr[x-d]+=c;
    arr[x]-=c;
}
for(int i=1;i<465;i++)arr[i]+=arr[i-1];
int ans=0;
for(int i=0;i<465;i++)ans=max(ans,arr[i]);
cout<<ans;
}
return 0;
}
 
/*_*/