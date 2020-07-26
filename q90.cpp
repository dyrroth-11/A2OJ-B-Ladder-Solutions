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
 
        ll x1,y1,r1,x2,y2,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        double ans;
        if((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<=(r1+r2)*(r1+r2))
        {
            if((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<=(r1-r2)*(r1-r2)) ans=abs(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))-abs(r1-r2))/2.0;
            else ans=0;
        }
        else
        {
            ans=(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))-r1-r2)/2.0;
        }
        cout<<fixed<<setprecision(12)<<ans;
}
return 0;
}
 
/*_*/