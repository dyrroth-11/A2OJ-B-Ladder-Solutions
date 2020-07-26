#include <bits/stdc++.h>
using namespace std;
 
bool cmp(const pair<int,int> a,const pair<int ,int > b){
return (a.second>b.second)||(a.second==b.second &&a.first>b.first);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n;
cin>>n;
pair<int,int > a[n];
for(int i=0;i<n;i++){
    cin>>a[i].first;
    cin>>a[i].second;
}
sort(a,a+n,cmp);
int ans=a[0].first,cnt=a[0].second;
for(int i=1;i<n&&i<=cnt;i++){
    ans+=a[i].first;
    cnt+=a[i].second;
}
cout<<ans;
    return 0;
}