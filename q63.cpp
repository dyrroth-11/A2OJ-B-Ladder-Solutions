#include <bits/stdc++.h>
using namespace std;
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n,m,s,f,t,l,r;
  cin>>n>>m>>s>>f;
  map<int ,pair<int,int> > z;
  for(int i=0;i<m;i++){
    cin>>t>>l>>r;
    z[t]={l,r};
  }
  int cnt=1;
  while(s!=f){
    if(z[cnt].first>0){
            int c; if(f>s){ c=1;}else c=0;
            //cout<<cnt<<" ";
            if((s>=z[cnt].first)&&(s<=z[cnt].second)||((c&&(s+1>=z[cnt].first && s+1 <=z[cnt].second)||(!c && (s-1>=z[cnt].first && s-1<=z[cnt].second))))){cout<<"X";}
             else {
           if(f>s){cout<<"R";s++;}
        else {cout<<"L";s--;}
    }
    }
    else {
           if(f>s){cout<<"R";s++;}
        else {cout<<"L";s--;}
    }
    cnt++;
  }
return 0;
}