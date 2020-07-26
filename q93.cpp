/*
    ıllıllı 𝔻𝓎Ｒｒ𝕠𝐭𝐇 ıllıllı
 
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=3001;
const int MM = 1e5+2;
 
 
int main(){
int T=1;
//cin>>T;
while(T--){
    int n,b,ans;
    cin>>n>>b;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    ans=b;
    for(int i=0;i<n;i++){
        int c=b/a[i],d=b%a[i];
        for(int j=i;j<n;j++){
            ans=max(ans,d+c*a[j]);
        }
    }
    cout<<ans;
}
return 0;
}
 
/*_*/