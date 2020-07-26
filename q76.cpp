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
ll n;
cin>>n;
set<ll> ans;
 
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        for(int k=1;k<=10;k++)
        {
            for(int m=0;m<(1<<k);m++){
                ll num=0;
                for(int x=0;x<k;x++){
                    num*=10;
                    if(m&(1<<x))num+=i;
                    else num+=j;
                }
                if(num<=n && num>0)ans.insert(num);
            }
        }
    }
}
cout<<ans.size()<<"\n";
}
return 0;
}
 
/*_*/