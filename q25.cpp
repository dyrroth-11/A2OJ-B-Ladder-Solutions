#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
long long int n,s=0,t;
cin>>n;
vector<int >a,b;
for(int i=0;i<n;i++){
    cin>>t;
    if(t>0)a.push_back(t);
    else b.push_back(t);
    s+=t;
}
if(s!=0){
    if(s>0){cout<<"first";return 0;}
    else cout<<"second";return 0;
}
for(int i=0;i<n/2;i++){
    if((a[i]+b[i])>0){cout<<"first";return 0;}
    else if((a[i]+b[i])<0){cout<<"second";return 0;}
}
if(t>0)cout<<"first";
else cout<<"second";
    return 0;
}