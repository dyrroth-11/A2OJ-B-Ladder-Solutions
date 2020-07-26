#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
string a;
cin>>a;
int x=0;
char arr[26]={};
for(int i=0;a[i];i++){
    arr[a[i]-'a']++;
}
for(int i=0;i<26;i++){
    if(arr[i]&1)x++;
}
if(x<=1){cout<<"First";return 0;}
if(x&1)cout<<"First";
else cout<<"Second";
return 0;
}