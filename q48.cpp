#include <bits/stdc++.h>
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a,b,c,d,p,q;
  cin>>a>>b>>c>>d;
  p=a*d;
  q=c*b;
  int r=__gcd(p,q);
  p/=r;
  q/=r;
  cout<<abs(p-q)<<"/"<<max(p,q);
 
    return 0;
}