#include <bits/stdc++.h>
using namespace std;
 
int main()
{  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
// freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  int n,m,ans=0;
    cin>>n>>m;
    int i;
    vector<set<int> > adj(n+9);
    for(i=0;i<m;i++)
    {
           int x,y;
           cin>>x>>y;
           adj[x-1].insert(y-1);
           adj[y-1].insert(x-1);
    }
    while(true){
           vector<int>g;
           for(i=0;i<n;i++)
           {
                  if(adj[i].size()==1)g.push_back(i);
           }
           for(i=0;i<g.size();i++)
           {
                  auto x=adj[g[i]].begin();
                  adj[g[i]].clear();
                  adj[*x].erase(g[i]);
           }
           if(g.size())ans++;
           else break;
    }
    cout<<ans;
    return 0;
}