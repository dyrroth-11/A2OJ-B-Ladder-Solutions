/*
    ıllıllı 𝔻𝓎Ｒｒ𝕠𝐭𝐇 ıllıllı
 
*/
#include <bits/stdc++.h>
using namespace std;
#define N 1000005
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
double pi=3.141592653589793238;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T=1;
//cin>>T;
while(T--){
int n,x;
cin>>n;
double a[n][n],b[n][n],w[n][n];
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    a[i][j]=b[i][j]=0.0;
    cin>>x;
    w[i][j]=(double)x;
    if(i==j)a[i][j]=w[i][j];
  }
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if(i==j)continue;
    a[i][j]=(w[i][j]+w[j][i])/2;
    b[i][j]=w[i][j]-a[i][j];
  }
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<fixed<<setprecision(10)<<a[i][j]<<" ";
  }
  cout<<"\n";
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<fixed<<setprecision(10)<<b[i][j]<<" ";
  }
  cout<<"\n";
}
}
return 0;
}
/*_*/