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
string s;
cin>>s;
int n=s.size();
ll ans=1;
for(int i=1;i<n;i++)
{
    int cnt=1;
    if(((((int)s[i-1]-(int)'0')+((int)s[i]-(int)'0'))==9))
    {
        while(((((int)s[i-1]-(int)'0')+((int)s[i]-(int)'0'))==9) && i<n)
        {
            i++;
            cnt++;
        }
        i--;
 
    }
    if((cnt&1) && cnt>=2) ans*=(cnt/2 +1);
}
cout<<ans<<"\n";
}
return 0;
}
 
/*_*/