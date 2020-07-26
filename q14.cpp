#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   long long int n,t=0;
   cin>>n;
   long long int arr[n+1];
   arr[0]=0;
   for(int i=1;i<n+1;i++) {cin>>arr[i];
   t+=abs(arr[i]-arr[i-1]);
   }
   t+=2*n-1;
   cout<<t;
    return 0;
}