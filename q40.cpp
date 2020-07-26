#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   int n;
   cin>>n;
   int t=n;
   while(t){
      if(!(n%t)){ cout<<t<<" ";n=t;}
      t--;
   }
 
    return 0;
}