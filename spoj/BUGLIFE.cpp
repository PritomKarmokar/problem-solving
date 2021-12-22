// Bipartite graph checking using dfs algorithm
#include<bits/stdc++.h>
using namespace std;

vector<int> graph[2005];
bool vis[2005];
bool color[2005];

bool check(int s, int c)
{
    //cout<<s<<" ";
    vis[s] = 1;
    color[s] = c;
    //printf("node %d - color %d\n", s, color[s]);

    for(int i = 0 ; i < graph[s].size(); i++){

        int cur = graph[s][i];

        if(!vis[cur] && check(cur, !c) == 0){
            return false;
        }
        else if(color[cur] == color[s]){
            return false;
        }

    }
    return true;
}

int main()
{
    // freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);

    int tc;
    cin>>tc;

    for(int t = 1; t <= tc; t++){

        int nodes, edges;
        cin>>nodes>>edges;

        memset(vis, 0, sizeof(vis));
        memset(graph, 0, sizeof(graph));
        memset(color, 0, sizeof(color));

        for(int i = 0 ; i < edges; i++){
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        bool ok = 0;

        for(int i = 1; i <= nodes; i++){
            if(!vis[i]){
                ok = check(i,0);
                if(!ok) break;
            }
        }

        printf("Scenario #%d:\n", t);
        if(ok){
            printf("No suspicious bugs found!\n");
        }    
        else{
            printf("Suspicious bugs found!\n");
        }

    }
    return 0;
}