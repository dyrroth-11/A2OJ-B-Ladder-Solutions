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
if(n==1){cout<<"1\n";return 0;}
ll arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
ll ans=0;
ll cnt=1;
for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
        ans+=(cnt*(cnt+1))/2;
        cnt=0;
    }
    cnt++;
}
ans+=(cnt*(cnt+1))/2;
cout<<ans<<"\n";
}
return 0;
}
 
/*_*/