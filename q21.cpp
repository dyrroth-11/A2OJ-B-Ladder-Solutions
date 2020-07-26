#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
long long int n,m,a;
cin>>n;
cin>>m;
vector<int> v;
if(m==0){cout<<"YES";return 0;}
for(int i=0;i<m;i++){
    cin>>a;
    v.push_back(a);
}
sort(v.begin(),v.end());
if(v[0]==1||v[m-1]==n){cout<<"NO";return 0;}
for(int i=0;i<m-2;i++){
    if((v[i+2]-v[i+1])==1&&(v[i+1]-v[i])==1){
        cout<<"NO";return 0;
    }
}
cout<<"YES";
return 0;
}