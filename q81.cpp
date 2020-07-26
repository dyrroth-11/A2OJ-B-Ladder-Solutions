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
 
int func(char c) {
    if (c >= '0' && c<='9') return (int)(c-'0');
    if (c >= 'A' && c<='Z') return (int)(c-'A'+10);
    return 0;
}
 
int solve(string s, int c) {
    int l = s.length(), ans = 0, p = 1;
    for (int i = l-1; i >= 0; i--) {
        ans += func(s[i])*p;
        p *= c;
    }
    return ans;
}
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
    string s;
    cin>>s;
    string a=s.substr(0,s.find(":"));
    string b=s.substr(s.find(":")+1);
    int f1=0,f2=0;
    int l1=a.length(),l2=b.length();
    for(int i=0;i<l1-1;i++) {
        if(a[i]!='0'){f1=1;break;}
    }
    for(int i=0;i<l2-1;i++) {
        if(b[i]!='0'){f2=1; break;}
    }
    if (!f1&&!f2){
        if(s[l1-1]<='N'){cout<<"-1\n";return 0;}
    }
    int mx=0;
    for(int i=0;i<l1;i++) {
        mx=max(mx,func(a[i]));
    }
    for(int i=0;i<l2;i++) {
        mx=max(mx,func(b[i]));
    }
    if(solve(a,mx+1)>23||solve(b,mx+1)>59){cout<<"0\n"; return 0;}
    for (int i=mx+1; ;i++) {
        if (solve(a,i)<= 23&&solve(b,i)<= 59)cout<<i<<" ";
        else break;
    }
ed:continue;
}
return 0;
}
 
/*_*/