/*
    ıllıllı 𝔻𝓎Ｒｒ𝕠𝐭𝐇 ıllıllı
 
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
const int N = 100001;
double pi=3.141592653589793238;
 
 
 
int main(){
int T=1;
//cin>>T;
while(T--){
 int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=0;i<=n;i++)cin>>a[i];
    for(int i=0;i<=m;i++)cin>>b[i];
    if(m>n)cout<<"0/1";
    else if(n>m){
	if((a[0]<0)^(b[0]<0))cout<<"-";
	cout<<"Infinity";}
    else{
        int k=__gcd(abs(a[0]),abs(b[0]));
        a[0]/=k;
		b[0]/=k;
        if(b[0]<0)a[0]*=-1;
		b[0]=abs(b[0]);
        cout<<a[0]<<"/"<<b[0];
    }
}
return 0;
}
/*_*/