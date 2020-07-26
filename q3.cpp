#include <bits/stdc++.h>
using namespace std;
int bitdif(int a, int b)
{   int count=0;
    for (int i=0;i<32;i++) {
        if (((a>>i)&1)!=((b>>i)&1)) {
            count++;
        } }
        return count; }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,k,ans=0,x;
    cin>>n>>m>>k;
    int arr[m];
    for(int i=0;i<m;i++) cin>>arr[i];
    cin>>x;
    for(int i=0;i<m;i++){
        if(bitdif(arr[i],x)<=k) ans++;
    }
    cout<<ans;
    return 0;
}