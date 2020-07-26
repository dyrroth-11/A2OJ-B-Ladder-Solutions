#include <bits/stdc++.h>
using namespace std;
 
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		if((m+i%m)%2==1) cout<<(m+i%m+1)/2<<"\n";
		else cout<<(m-(i%m))/2<<"\n";
	}
return 0;
}