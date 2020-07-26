#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   long long int n,t, ans=0,s=0,cnt=0;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        while(t<arr[i])t+=arr[s],s++,cnt--;
        t-=arr[i],cnt++;
        if(cnt>ans) ans=cnt;
    }
    cout<<ans;
    return 0;
}