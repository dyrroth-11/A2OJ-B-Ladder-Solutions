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
  int l,d,v,g,r;
    cin>>l>>d>>v>>g>>r;
    int k=d/((g+r)*v);
    double t=d/(double)v;
    if (v*(k*(g+r)+g)<=d){
        t=(k+1)*(g+r);
    }
    t+=(double)(l-d)/(double)v;
    cout<<fixed<<setprecision(12)<<t<<"\n";
}
return 0;
}
 
/*_*/