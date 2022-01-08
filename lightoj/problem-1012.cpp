#include<bits/stdc++.h>
using namespace std;

const int N = 25;
char board[N][N];
bool vis[N][N];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n, m, total;

bool is_valid(int x, int y)
{
    if(x < 0 || y < 0 || x >= n || y >= m)
        return false;
    
    if(vis[x][y]) return false;

    if(board[x][y] == '#') return false;

    return true;
}

void dfs(int x, int y)
{
    total += 1;

    vis[x][y] = 1;

    //cout<<x<<" "<<y<<"\n";

    for(int i = 0 ; i < 4; i++){
        if(is_valid(x+dx[i], y+dy[i]))
            dfs(x+dx[i], y+dy[i]);
    }

}

void clear()
{
    total = 0;

    memset(vis, 0, sizeof(vis));

    memset(board, 0, sizeof(board));

}

int main()
{
    // freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);

    int tc;
    cin>>tc;

    for(int t = 1; t <= tc; t++){

        clear();

        cin>>n>>m;
        
        swap(n,m);

        int x, y;

        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                cin>>board[i][j];

                if(board[i][j] == '@'){
                    x = i;
                    y = j;
                }
            }
        }
        //cout<<x<<" "<<y<<endl;
        dfs(x,y);

        cout<<"Case "<<t<<": "<<total<<"\n";
    }

    return 0;
}