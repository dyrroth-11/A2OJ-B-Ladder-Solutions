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
ll sum=0;
for(auto &x : arr){
    cin>>x;
    sum+=x;
}
if(sum%n!=0){goto ed;}
else{
    sum/=n;
    int diff=0,x,y;
    for(int i=0;i<n;i++){
        if(arr[i]!=sum){
            if(diff==0)x=i;
            else if(diff==1)y=i;
            diff++;
        }
    }
    if(diff==0){cout<<"Exemplary pages.\n";return 0;}
    if(diff>2 || diff==1 ){goto ed;}
    int f=(max(arr[x],arr[y])-min(arr[x],arr[y]))/2;
    if(arr[x]==max(arr[x],arr[y])){
        x=x^y;
        y=x^y;
        x=x^y;
    }
    cout<<f<<" ml. from cup #"<<x+1<<" to cup #"<<y+1<<".\n";
}
return 0;
ed: cout<<"Unrecoverable configuration.\n";
}
return 0;
}
 
/*_*/