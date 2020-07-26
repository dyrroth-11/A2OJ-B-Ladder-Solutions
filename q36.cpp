#include <bits/stdc++.h>
using namespace std;
 
bool cmp(const pair<int,int> a,const pair<int ,int > b){
return (a.second<b.second)||(a.second==b.second &&a.first>b.first);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,d,ans=0,flag=1;
cin>>n;
pair <int , int > a[n];
pair<int ,int > v[100001]={};
for(int i=1;i<=n;i++){
    cin>>a[i].second;
    a[i].first=i;
}
sort(a+1,a+n+1,cmp);
for(int i=1;i<=n;i++){
    if(a[i].second==a[i+1].second){
        d=a[i].first-a[i+1].first;
        i++;
       while(a[i].second==a[i+1].second&&i<=n-1){
        if((a[i].first-a[i+1].first)!=d){flag=0;}
        i++;
       }
     if(flag){  v[ans].first=a[i].second;
       v[ans].second=d;
       ans++;
       }
       flag=1;
    }
    else{   v[ans].first=a[i].second;
       v[ans].second=0;
       ans++;
}}
cout<<ans<<"\n";
for(int i=0;i<ans;i++){
    cout<<v[i].first<<" "<<v[i].second<<"\n";
}
    return 0;
}