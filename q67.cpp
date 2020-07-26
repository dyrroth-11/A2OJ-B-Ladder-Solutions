/*
    ıllıllı 𝔻𝓎Ｒｒ𝕠𝐭𝐇 ıllıllı
 
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
const int N = 100001;
double pi=3.141592653589793238;
 
 
 
int main(){
int T=1;
//cin>>T;
while(T--){
    int n,d,l,z=-1;
    cin>>n>>d>>l;
    int a[n],x=d;
    for(int i=0;i<n;i++){
        if(i%2){
            if(d<-l){d+=l;a[i]=l;}
            else if(d>-1){d+=1;a[i]=1;}
            else {a[i]=-d;d=0;z=i;}
        }
        else{
            if(d>l){d-=l;a[i]=l;}
            else if(d<1){d-=1;a[i]=1;}
            else {a[i]=d;d=0;z=i;}
        }
    }
    if(d!=0){
        if(l==1||z==-1)goto ed;
        if(a[z]<l)a[z]++;
        else if(z+2<n)a[z+2]++;
        else goto ed;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
 
}
return 0;
    ed: cout<<-1;
}
/*_*/