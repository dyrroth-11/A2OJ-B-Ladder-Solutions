#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,t=0;
double x,y,a,b;
cin>>n>>x>>y;
set<double > s;
for(int i=0;i<n;i++)
  {cin>>a>>b;
  if((x-a)==0)t++;
  else s.insert((y-b)/(x-a));}
 if(t)cout<<s.size()+1;
 else
  cout<<s.size();
    return 0;
}