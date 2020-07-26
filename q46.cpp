#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int cnt =1;
		for(int j=i-1;j>=0&&a[j]<=a[j+1];j--)cnt++;
		for(int j=i+1;j<n&&a[j]<=a[j-1];j++)cnt++;
		ans=max(ans,cnt);
	}
	cout<<ans;
    return 0;
}