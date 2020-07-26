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
set<string> ss;
string s;
cin>>s;
 
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for(int i=2013;i<=2015;i++){
    for(int j=1;j<=12;j++){
        for(int k=1;k<=day[j-1];k++){
            string date="";
            if(k<10)date+='0';
            date+=to_string(k);
            date+='-';
            if(j<10)date+='0';
            date+=to_string(j);
            date+='-';
            date+=to_string(i);
            ss.insert(date);
        }
    }
}
map<string,int> m;
for(int i=0;i<=s.size()-10;i++){
    string k=s.substr(i,10);
    if(ss.count(k))m[k]++;
}
int mx=0;string ans;
for(auto x:m){
    if(x.yy>mx){
        ans=x.xx;
        mx=x.yy;
    }
}
cout<<ans;
}
return 0;
}
 
/*_*/