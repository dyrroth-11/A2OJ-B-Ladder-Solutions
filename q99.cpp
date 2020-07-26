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
const int MM = 2e5+1;
 
int h,w,h1,h2,w1,w2,H,W;
 
void update(int h,int w){
if(H==0)goto ed;
if(h*1LL*w>H*1LL*W)goto ed;
if(h*1LL*w==H*1LL*W  && h>H)goto ed;
return ;
ed:
    H=h;
    W=w;
    return;
}
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
cin>>h>>w;
for(int i=0;(1<<i)<h;i++){
    h1=(1<<i);
    w1=min((5LL*h1)/4,w*1LL);
    w2=(4LL*h1)/5+min(1LL,(4LL*h1)%5);
    if(w1>=w2)update(h1,w1);
}
for(int i=0;(1<<i)<=w;i++) {
    w1=(1<<i);
    h1=min((5LL*w1)/4,h*1LL);
    h2=(4LL*w1)/5+min(1LL,(4LL*w1)%5);
    if(h1>=h2)update(h1,w1);
}
cout<<H<<" "<<W<<"\n";
}
return 0;
}
 
/*_*/