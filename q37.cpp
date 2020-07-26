#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s="><+-.,[]";
	string t;
	cin>>t;
	int ans = 0;
	for(int i=0;t[i];i++)
	{
		ans = ((ans*16)%1000003+8+s.find(t[i])%1000003)%1000003;
	}
	cout<<ans;
    return 0;
}