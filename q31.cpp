#include <bits/stdc++.h>
using namespace std;
int x[4]={ 1 ,-1 , 0 , 0};
int y[4]={ 0,0 ,-1, 1};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m,ans=0;
    cin>>n>>m;
    char arr[n+2][m+2];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin>>arr[i][j];
    for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)
            if(arr[i][j]=='W')
              for(int k=0;k<4;k++){
                 if(arr[i+x[k]][j+y[k]]=='P'){ans++;break;}
                }
    cout<<ans;
    return 0;
}