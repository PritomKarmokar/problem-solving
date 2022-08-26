#include<bits/stdc++.h>
#define INF 1e9 + 7
#define mx 1e6 + 5
using namespace std;

vector< int > coins(105);
vector< int > dp(mx, - 1);
int n, x;

int solve(int x)
{
    if(x == 0) return 0;
    
    if(x < 0) return INF;

    if(dp[x] != -1) return dp[x];

    int best = INF;

    for(int i = 0; i < n ; i++){ 
        int c = coins[i];
        best = min(best, solve(x - c) + 1);
    }

    dp[x] = best;

    return dp[x];
}

int main()
{
    dp[0] = 0;

    cin >> n >> x;

    for(int i = 0; i < n; i++) cin >> coins[i];

    int ans = solve(x);

    if(ans == INF){
        cout << "-1\n";
    }
    else{
        cout << dp[x] << "\n";
    }

    return 0;
}