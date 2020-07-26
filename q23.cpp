#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int p,q,r,l,ans=0,x,y;
  cin>>p>>q>>l>>r;
  int ax[10001]={};
  int bx[10001]={};
  int *a=ax+5000,*b=bx+5000;
  for(int i=0;i<p;i++){
    cin>>x>>y;
    for(int j=x;j<=y;j++)a[j]=1;
  }
  for(int i=0;i<q;i++){
    cin>>x>>y;
    for(int j=x;j<=y;j++)b[j]=1;
  }
  for(int i=l;i<=r;i++){
    for(int j=0;j<1001;j++){
        if(a[j]&&b[j-i]){ans++;break;}
    }
  }
  cout<<ans;
    return 0;
}