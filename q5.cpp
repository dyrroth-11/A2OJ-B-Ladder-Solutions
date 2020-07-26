#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n,l;
    cin>>n>>l;
    double arr[n],d=0,x;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
        d=max(d,arr[i+1]-arr[i]);
        x=max(2*arr[0],2*(l-arr[n-1]));
        d=max(x,d);
    printf("%.10f",d/2);
    return 0;
}