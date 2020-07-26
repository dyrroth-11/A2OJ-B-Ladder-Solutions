#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
// freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
int n,k;
cin>>n>>k;
int t=2*n;
   while(k--)
	{ cout<<t<< " "<<t-1<< " ";
		t-=2;
		}
	for(int i=1;i<=t; i++)
		cout<<i<<" ";
}