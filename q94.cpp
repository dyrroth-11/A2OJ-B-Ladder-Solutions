/*
    ıllıllı 𝔻𝓎Ｒｒ𝕠𝐭𝐇 ıllıllı
 
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=3001;
const int MM = 1e5+2;
 
 
int main(){
int T=1;
//cin>>T;
while(T--){
    int sum[30][30];
    string s;
    int n,m;
    cin>>n>>m;
    memset(sum,0,sizeof(sum));
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        for(int j=0;j<m;j++)sum[i][j+1]=sum[i-1][j+1]+sum[i][j]-sum[i-1][j]+(s[j]-'0');
    }
    int ans=0;
    for(int x1=1;x1<=n;x1++)
    {
        for(int y1=1;y1<=m;y1++)
        {
            for(int x2=x1;x2<=n;x2++)
            {
                for(int y2=y1;y2<=m;y2++)if(sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1]==0)
                {
                    if (2*(x2+y2-x1-y1+2)>ans)ans=2*(x2+y2-x1-y1+2);
                }
            }
        }
    }
    cout<<ans<<"\n";
}
return 0;
}
 
/*_*/