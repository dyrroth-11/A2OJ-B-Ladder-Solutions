/*
    ıllıllı 𝔻𝓎Ｒｒ𝕠𝐭𝐇 ıllıllı
 
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
#define x first
#define y second
#define point pair<int,int>
#define eps 0.00000001
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=3001;
const int MM = 1e5+2;
point x[350];
 
inline double area(point A,point B,point C){
return ((double)(B.x - A.x) * (C.y - B.y) - (B.y - A.y) * (C.x - B.x)) * 0.5;
}
inline double maxx(double &A , double B){
if(B-A>eps)
    A=B;
}
 
int main(){
int T=1;
//cin>>T;
while(T--){
int n;
cin>>n;
for(int i=1;i<=n;i++)cin>>x[i].x>>x[i].y;
double ans=0.0;
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        double maxminus=-1,maxplus=-1;
        for(int k=1;k<=n;k++){
            if(k!=i && k!=j){
                if(area(x[i],x[j],x[k])<0)maxx(maxminus,-area(x[i],x[j],x[k]));
                else maxx(maxplus,area(x[i],x[j],x[k]));
            }
            if(maxplus>=0 && maxminus>=0)maxx(ans,maxminus+maxplus);
        }
    }
}
cout<<fixed<<setprecision(12)<<ans;
}
return 0;
}
 
/*_*/