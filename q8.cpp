#include <bits/stdc++.h>
using namespace std;
void fun(long long int a){
    long long int y;
    y=sqrt(a);
    if(y*y!=a){cout<<"NO\n"; return;}
    if(y==2){cout<<"YES\n"; return;}
    if(y%2==0||y==1){cout<<"NO\n"; return;}
for(long long int i=3;i<=sqrt(y);i+=2){
    if(y%i==0) {cout<<"NO\n"; return;}
}
cout<<"YES\n"; return;
}
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  long long int n,temp;
  cin>>n;
  for(long long int i=0;i<n;i++){
    cin>>temp;
    fun(temp);
  }
  return 0;
}