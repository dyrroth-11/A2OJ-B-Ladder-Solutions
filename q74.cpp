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
   ll w,h,a=0,b=0;
    cin>>w>>h;
    for(int i=2;;i+=2){
        if(i>w&&i>h)break;
        if(i<=w){a+=w-i+1;}
        if(i<=h){b+=h-i+1;}
    }
    cout<<(a*b);
}
return 0;
}
 
/*_*/