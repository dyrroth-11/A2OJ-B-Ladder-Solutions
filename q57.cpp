#include <bits/stdc++.h>
using namespace std;
int dyrroth(int x){
return x&(-x);
}
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int s,l;
cin>>s>>l;
set<int> m;
int f=l;
{while(s&&(f>0)){
int c=dyrroth(f);
if(s>=c)
{s-=c;
m.insert(f);}
f--;
}
if(s){cout<<"-1";return 0;}
cout<<m.size()<<"\n";
for(set<int> :: iterator it=m.begin();it!=m.end();it++)cout<<(*it)<<" ";
}
return 0;
 
}