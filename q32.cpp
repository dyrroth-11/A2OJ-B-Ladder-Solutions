#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int d,sum,mi=0,ma=0;
   cin>>d>>sum;
   int t1[d]={},t2[d]={};
 
   for(int i=0;i<d;i++){
    cin>>t1[i]>>t2[i];
    mi+=t1[i];
    ma+=t2[i];
   }
   if(sum>=mi&&sum<=ma){cout<<"YES\n";
   for(int i=0;i<d;i++){
    cout<<min(t1[i]+sum-mi,t2[i])<<" ";
    sum-=(min(t1[i]+sum-mi,t2[i])-t1[i]);
   }
 
   }
   else cout<<"NO";
    return 0;
}