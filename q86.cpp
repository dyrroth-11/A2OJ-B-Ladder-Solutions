#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
#define xx first
#define yy second
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
 
vector<vector<int> > adj(55);
void dfs(bool a[],int u)
{
	if(a[u])	return;
	else	a[u]=true;
	for(int i=0;i<adj[u].size();i++)
	{
		dfs(a,adj[u][i]-1);
	}
}
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
    int n;
	cin>>n;
	int a=(n*(n-1))/2-1,f[n]={0};
 
	for(int i=0;i<a;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x-1].push_back(y);
		f[x-1]++;f[y-1]++;
	}
	int ct=0,x,y;
	for(int i=0;i<n;i++)
	{
		if(f[i]==n-1)	continue;
		if(ct)	{y=i;break;}
		else {ct++;x=i;}
	}
	bool vis[n];
	memset(vis,false,sizeof(vis));
	dfs(vis,x);
	if(vis[y])	cout<<x+1<<" "<<y+1;
	else cout<<y+1<<" "<<x+1;
ed:continue;
}
return 0;
}
 
/*_*/