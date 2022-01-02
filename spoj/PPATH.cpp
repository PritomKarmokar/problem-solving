#include<bits/stdc++.h>
using namespace std;

const int N = 1e4;
vector<int>graph[N];
vector<int> prime;
bool status[(N/2) + 1];
bool vis[N];
int dist[N];


void sieve()
{
    int sqrtN = sqrt(N);
    
    for(int i = 3; i <= sqrtN; i+=2){
        if(!status[i>>1]){
            for(int j = i*i ; j <= N ; j += i+i){
                status[j>>1] = 1;
            }
        }
    }

    //prime.push_back(2);
    for(int i = 3; i <= N ; i+=2){
        if(i > 1000 && !status[i>>1]) 
            prime.push_back(i);
    }

}

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    dist[s] = 0;

    while(!q.empty()){
        int u = q.front();
        //cout<<u<<" ";
        q.pop();
        
        for(int i = 0 ; i < graph[u].size(); i++){
            int cur = graph[u][i];
            if(!vis[cur]){
                vis[cur] = 1;
                q.push(cur);
                dist[cur] = dist[u] + 1;
            }
        }
    }
}

bool check(int a, int b)
{
    int cnt = 0;

    while(a > 0 && b > 0){
        int rem_1 = a % 10;
        int rem_2 = b % 10;
        if(rem_1 == rem_2) cnt += 1;
        a /= 10;
        b /= 10;
    }
    
    if(cnt == 3) return true;
    return false;

}

void clear()
{
    for(int i = 0 ; i < N; i++){
        graph[i].clear();
        vis[i] = 0;
        dist[i] = -1;
    }
}

void graph_input()
{
    int l = prime.size();

    for(int i = 0 ; i < l ; i++){
        int a = prime[i];
        for(int j = i + 1; j < l ; j++){
            int b = prime[j];
            if(check(a,b)){
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
        }
    }
}


int main()
{
    // freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);

    clear();
    sieve();
    graph_input();

    int tc;
    cin>>tc;

    while(tc--){

        int src, des;
        cin>>src>>des;

        bfs(src);
        
        if(dist[des] != -1){
            cout<<dist[des]<<"\n";
        }
        else{
            cout<<"Impossible\n";
        }

        memset(vis, 0, sizeof(vis));
    }

    return 0;
}