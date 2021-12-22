// bipartite graph checking using bfs algorithm

#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 20005;
vector<int> graph[N];
bool vis[N];
bool color[N];

ll bfs(int source)
{
    queue<int> q;
    q.push(source);

    vis[source] = 1;
    color[source] = 1;

    ll one = 1, zero = 0;

    while(!q.empty()){
        int  u = q.front();
        q.pop();

        for(int i = 0 ; i < graph[u].size(); i++){
            int cur = graph[u][i];

            if(!vis[cur]){
                vis[cur] = 1;
                q.push(cur);

                if(color[u] == 1){
                    color[cur] = 0;
                    zero += 1;
                }
                else if(color[u] == 0){
                    color[cur] = 1;
                    one += 1;
                }
            }
        }
    }

    return max(zero, one);
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc;
    cin>>tc;

    for(int t = 1; t <= tc; t++){
        
        for(int i = 0; i <= N ; i++) graph[i].clear();
        memset(vis, 0, sizeof(vis));
        memset(color, 0, sizeof(color));

        int n;
        cin>>n;

        for(int i = 0 ; i < n ; i++){
            int u, v;
            cin>>u>>v;

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        ll ans = 0;

        for(int i = 0 ; i < N ; i++){
            if(!vis[i] && !graph[i].empty()){
                ans += bfs(i);
            }
        }

        cout<<"Case "<<t<<": "<<ans<<"\n";
    }
    return 0;
}