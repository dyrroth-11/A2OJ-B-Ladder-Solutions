#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,brk;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    i=0;
    while(arr[i]<=arr[i+1] && i<n-1)
    i++;
    if(i==n-1){cout<<0;return 0;}
    brk=i+1; i++;
    while(arr[i]<=arr[i+1] && i<n-1){i++;}
    if(i!=n-1) {cout<<-1; return 0;}
    else if(arr[n-1]>arr[0])
    {cout<<-1; return 0;}
    else cout<<n-brk;
    return 0;
}