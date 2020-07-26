#include <bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
int n,k,i;
cin>>n>>k;pair<int ,int>a[n];
	for(i=0;i<n;i++)
	{
	   a[i].second=i+1;
	   cin>>a[i].first;
	}
	sort(a,a+n);
	cout<<a[n-k].first<<endl;
	for(i=n-k;i<n;i++)
	{
		cout<<a[i].second<<" ";
	}
 
}