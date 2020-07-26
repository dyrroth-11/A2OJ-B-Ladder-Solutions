#include<bits/stdc++.h>
 
using namespace std;
 
int n,e,i,j;
vector<vector<int> > graph;
vector<int> color;
bool vis[100011];
 
bool isBipartite(int x)
{
    color[x] = 1;
    queue <int> q;
    q.push(x);
    vis[x]=true;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (i=0;i<n;i++)
        {
            if (graph[temp][i] && color[i] == -1)
            {
                color[i] = 1 - color[temp];
                vis[i]=true;
                q.push(i);
            }
            else if (graph[temp][i] && color[i] == color[temp])
                return 0;
        }
    }
    return 1;
}
 
int main()
{
    int x,y;
    cin>>n>>e;
    graph.resize(n);
    color.resize(n,-1);
    memset(vis,0,sizeof(vis));
    for(i=0;i<n;i++)
        graph[i].resize(n);
    for(i=0;i<e;i++)
    {
        cin>>x>>y;
        x--; y--;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(!isBipartite(i))ans++;
        }
    }
   if((n-ans)&1){
    ans++;
   }
   cout<<ans;
    return 0;
}