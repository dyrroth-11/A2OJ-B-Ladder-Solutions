#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>m>>n;
    int t[m][n], ans[m]={};
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>t[i][j];
 
    for(int i=0;i<n;i++){
       int time=0;
       for(int j=0;j<m;j++){
    time=ans[j]=max(ans[j],time) + t[j][i];
      }
    }
 
for(int i=0;i<m;i++){
    cout<<ans[i]<<" ";
}
    return 0;
}