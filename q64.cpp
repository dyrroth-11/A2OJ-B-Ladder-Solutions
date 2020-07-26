#include <bits/stdc++.h>
using namespace std;
 
set<long long int > m;
long long int n;
void dyrroth(long long int x,int f,int s){
if(x>1e11)return;
if(f==s && f!=0) m.insert(x);
    dyrroth(10*x +4 ,f+1,s);
    dyrroth(10*x +7,f,s+1);
}
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin>>n;
dyrroth(0,0,0);
cout<<*m.lower_bound(n);
return 0;
}