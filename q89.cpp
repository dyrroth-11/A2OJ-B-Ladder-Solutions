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
    int n,m;
    cin>>n>>m;
    char c[n][m];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    set<pair<int,int> >s;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<m;j++){
            if(c[i][j]=='B')s.insert({i,j});
            if(k==0&&c[i][j]=='B'){
                k=1;
            }
            if(k==1&&c[i][j]=='W'){
                k=2;
            }
            if(k==2&&c[i][j]=='B'){
                cout<<"NO";return 0;
            }
        }
    }
    for(int j=0;j<m;j++){
        int k=0;
        for(int i=0;i<n;i++){
            if(k==0&&c[i][j]=='B'){
                k=1;
            }
            if(k==1&&c[i][j]=='W'){
                k=2;
            }
            if(k==2&&c[i][j]=='B'){
                cout<<"NO";return 0;
            }
        }
    }
    set<pair<int,int> >::iterator i,j;
    int k=0;
    for(i=s.begin();i!=s.end();i++){
        j=s.begin();
        for(int z=0;z<=k;z++)j++;
        for(;j!=s.end();j++){
            int a=(*i).xx,b=(*i).yy,c=(*j).xx,d=(*j).yy;
            if(s.find({a,d})==s.end())
                if(s.find({c,b})==s.end()){
                    cout<<"NO";return 0;
                }
        }
        k++;
    }
    cout<<"YES";
}
return 0;
}
 
/*_*/