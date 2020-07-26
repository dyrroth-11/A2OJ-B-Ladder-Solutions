#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,sum=0,x,y;
cin>>n;
while(n--){
  cin>>x>>y;
  if(sum+x<=500){
    sum+=x;
    cout<<"A";
  }
  else {
    sum-=y;
    cout<<"G";
  }
}
    return 0;
}