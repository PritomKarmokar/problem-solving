#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
char board[N][N];
bool vis[N][N];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m;

bool is_valid(int x, int y)
{
    if(x < 0 || y < 0 || x >= n || y >= m) return false;

    if(vis[x][y]) return false;

    if(board[x][y] == '#') return false;

    return true;
}

void dfs(int x, int y)
{
    vis[x][y] = 1;

    for(int i = 0 ; i < 4; i++){
        if(is_valid(x + dx[i], y + dy[i]))
            dfs(x + dx[i], y + dy[i]);
    }
}

void clear()
{
    memset(board, 0, sizeof(board));
    memset(vis, 0, sizeof(vis));
}


int main()
{
    // freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);

    cin>>n>>m;

    clear();
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>board[i][j];
        }
    }

    int total = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(board[i][j] == '.' && !vis[i][j]){
                dfs(i,j);
                total += 1;
            }
        }
    }

    cout<<total<<"\n";

    return 0;
}