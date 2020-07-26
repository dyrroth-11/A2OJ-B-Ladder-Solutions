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
int n;
cin>>n;
int arr[n];
int a=-1,b=-1;
int flag=true;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(a==-1 && arr[i]!=i+1)a=i;
}
b=a+1;
while(b<n && (arr[b]+1==arr[b-1])){
    b++;
}
if(b!=n){
    int s=b;
    while(s<n){
        if(arr[s]!=s+1)flag=false;
        s++;
    }
}
b--;
if(flag){
if(a==b){cout<<"0 0\n";return 0;}
else {
    cout<<a+1<<" "<<b+1;
}}
else cout<<"0 0\n";
}
return 0;
}
 
/*_*/