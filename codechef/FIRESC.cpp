#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int N = 1e5 + 2;
const int mod = 1e9 + 7;
vector<int> graph[N];
bool vis[N];

int bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    int total_nodes = 1;

    while(!q.empty()){
        int u = q.front();
        //cout<<u<<" ";
        q.pop();

        for(int i = 0 ; i < graph[u].size() ; i++){
            int cur = graph[u][i];

            if(!vis[cur]){
                q.push(cur);
                vis[cur] = 1;
                total_nodes += 1;
            }
        }
    }
    return total_nodes;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc;
    cin>>tc;

    while(tc--){
        int nodes, edges;
        cin>>nodes>>edges;

        for(int i = 0 ; i < N; i++) {
            graph[i].clear();
            vis[i] = 0;
        }

        for(int i = 0 ; i < edges; i++){
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        int cnt = 0;
        ll ways = 1;

        for(int i = 1; i <= nodes; i++){
            ll total_nodes = 0;

            if(!vis[i]){
                total_nodes = (ll) bfs(i);
                cnt += 1;
            }

            if(total_nodes > 0) 
                ways = (ways * total_nodes) % mod;
        }

        cout<<cnt<<" "<<ways<<"\n";

    }
    return 0;
}
