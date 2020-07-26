#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long int n,m,d,ans=0;
	cin>>n>>m>>d;
	int a[n*m];
	for(int i=0;i<n*m;i++)
	{  cin>>a[i];
		if((a[i]-a[0])%d != 0)  {cout<<-1;return 0;}
	}
	sort(a,a+(n*m));
	for(int i=0;i<n*m;i++)
		ans+=(abs(a[i] - a[(n*m)/2]) / d);
	cout<<ans;
    return 0;
}