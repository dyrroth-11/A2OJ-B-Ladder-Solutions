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
string s1,s2,s3;
cin>>s1>>s2>>s3;
char fokat[3]={'-','_',';'};
for(int i=0;i<3;i++){
    s1.erase(remove(s1.begin(),s1.end(),fokat[i]),s1.end());
    s2.erase(remove(s2.begin(),s2.end(),fokat[i]),s2.end());
    s3.erase(remove(s3.begin(),s3.end(),fokat[i]),s3.end());
}
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
  set<string > s;
  s.insert( s1+s2+s3);
  s.insert( s1+s3+s2);
  s.insert( s2+s1+s3);
  s.insert( s2+s3+s1);
  s.insert( s3+s2+s1);
  s.insert( s3+s1+s2);
 
int n;
cin>>n;
while(n--){
    string x;
    cin>>x;
    for(int i=0;i<3;i++){
    x.erase(remove(x.begin(),x.end(),fokat[i]),x.end());}
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    if(s.count(x)){cout<<"ACC\n";}
    else cout<<"WA\n";
 
}
}
return 0;
}
 
/*_*/