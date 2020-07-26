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
int arr[k+1]={};
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr[x]++;
}
int ans=0;
while(arr[k]!=n){
    int temp[k+1]={};
    for(int i=1;i<k;i++){
        if(arr[i]>0){
            arr[i]--;
            temp[i+1]++;
        }
    }
    for(int i=1;i<=k;i++){
        if(temp[i]>0)
        {
            arr[i]++;
            temp[i]--;
        }
    }
    ans++;
   // cout<<ans<<"------\n";
}
cout<<ans<<"\n";
}
return 0;
}
 
/*_*/