#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  int n;
  cin>>n;
  string s="abcd";
  for(int i=0;i<n;i++){
    cout<<s[i%4];
  }
    return 0;
}