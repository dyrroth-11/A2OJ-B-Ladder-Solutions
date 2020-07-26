#include <bits/stdc++.h>
using namespace std;
 
int l[101],r[101],n=0;
bool visit[101];
void dyrroth(int x){
visit[x]=true;
for(int i=1;i<=n;i++){
    if(visit[i])continue;
    if(l[x]>l[i] && l[x]<r[i]) dyrroth(i);
    else if(r[x]>l[i] && r[x]<r[i]) dyrroth(i);
}
}
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int q;
  cin>>q;
  while(q--){
    int a,x,y;
    cin>>a;
    if(a==1){
        n++;
        cin>>l[n]>>r[n];
    }
    else {
        cin>>x>>y;
    memset(visit,0,sizeof(visit));
    dyrroth(x);
    if(visit[y])cout<<"YES\n";
    else cout<<"NO\n";
    }
  }
return 0;
}