/*
The given problem can be solved using dfs or bfs algorithm.
Here I have used bfs to solve it.
We have to call bfs 2 times in order to solve the problem.

*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
vector<int> graph[N];
bool vis[N];
int dist[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);

    vis[source] = 1;
    dist[source] = 0;

    while(!q.empty()){
        int u = q.front();
        //cout<<u<<" ";
        q.pop();

        for(int i = 0 ; i < graph[u].size(); i++){
            int cur = graph[u][i];
            if(!vis[cur]){
                vis[cur] = 1;
                dist[cur] = dist[u] + 1;
                q.push(cur);
            }
        }
    }

}

int max_node(int nodes){
    int mx = -1, mx_node = 0;
    for(int i = 1; i <= nodes; i++){
        if(mx < dist[i]){
            mx = dist[i];
            mx_node = i;
        }
    }
    return mx_node;
}

void clear(){
    for(int i = 0; i < N ; i++){
        graph[i].clear();
        vis[i] = 0;
        dist[i] = 0;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt","w", stdout);

    int nodes;
    cin>>nodes;

    clear();

    for(int i = 1; i < nodes; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1);
    
    int mx_node = max_node(nodes);
    int mx_dist = dist[mx_node];

    for(int i = 0; i <= N ; i++) {
        dist[i] = 0;
        vis[i] = 0;
    }

    bfs(mx_node);

    for(int i = 1; i <= nodes; i++){
        if(mx_dist < dist[i]){
            mx_dist = dist[i];
        }
    }

    cout<<mx_dist<<"\n";

    return 0;
}