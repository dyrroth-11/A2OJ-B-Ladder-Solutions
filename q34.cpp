#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
string s;
cin>>s;
int seven=0,four=0;
for(int i=0;s[i];i++){
    if(s[i]=='7')seven++;
    if(s[i]=='4')four++;
}
if(four==0&&seven==0){cout<<"-1";return 0;}
four>=seven?cout<<"4":cout<<"7";
    return 0;
}