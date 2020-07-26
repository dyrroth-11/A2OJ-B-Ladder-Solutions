#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n,s,t,x=0;
    cin>>n>>s>>t;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<=100000;i++)
    {if(s==t) goto ed;
        s=arr[s-1];
        x++;
 
    }
    cout<<"-1";return 0;
  ed:  cout<<x;
    return 0;
}