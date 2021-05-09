// Recursion, graph

#include<bits/stdc++.h>

using namespace std;

vector<int>graph[30];
bool visited[30][30];

int dfs(int cur)
{
    int mx = 0;

    for(int i = 0 ; i < graph[cur].size(); i++){
        int next = graph[cur][i];
        if(!visited[cur][next]){
            visited[cur][next] = visited[next][cur] = 1;
            mx = max(mx,1+dfs(next));
            visited[cur][next] = visited[next][cur] = 0;
        }
    }
    return mx;
}

int main()
{
    int nodes, edges;
    int u, v;

    while(true){
        cin>>nodes>>edges;
        if(nodes == 0 and edges == 0) break;

        for(int i = 0 ; i < edges; i++){
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int ans = 0;

        for(int i = 0 ; i < nodes ; i++){
            memset(visited, 0, sizeof visited);
            ans = max(ans, dfs(i));
        }

        cout<<ans<<endl;

        memset(graph, 0, sizeof graph);
    }
}  