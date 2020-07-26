#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
string a,b;
cin>>a>>b;
int sa[26]={},sb[26]={},ans=0;
for(int i=0;a[i];i++){
    sa[a[i]-'a']++;
}
for(int i=0;b[i];i++){
    sb[b[i]-'a']++;
}
for(int i=0;i<26;i++){
    if(sa[i]==0&&sb[i]!=0){cout<<"-1";return 0;}
    ans+=min(sa[i],sb[i]);
}
cout<<ans;
    return 0;
}