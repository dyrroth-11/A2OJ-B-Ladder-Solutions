#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
string aa,bb;
int a[26]={0},b[26]={0},j=0;
cin>>aa;
cin>>bb;
if(aa.length()<bb.length()){cout<<"need tree";return 0;}
for(int i=0;aa[i];i++){
    if(aa[i]==bb[j]){
        j++;}}
if(j==bb.length()){cout<<"automaton";return 0;}
for(int i=0;aa[i];i++) a[aa[i]-'a']++;
for(int i=0;bb[i];i++) b[bb[i]-'a']++;
for(int i=0;i<26;i++){
    if(a[i]<b[i]){cout<<"need tree";return 0;}
}
if(aa.length()==bb.length()) cout<<"array";
else cout<<"both";
 
 
    return 0;
}