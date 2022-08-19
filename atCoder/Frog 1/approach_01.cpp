#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 5;
int dp[mx];
int cost[mx];

int solve(int i)
{
    if(i == 0) return 0;
    if(dp[i] != -1) return dp[i];
    
    int cost1 = solve(i - 1) + abs(cost[i] - cost[i-1]);

    int cost2 = INT_MAX;
    if(i > 1){
        cost2 = solve(i - 2) + abs(cost[i] - cost[i-2]);
    }

    dp[i] = min(cost1, cost2);

    return dp[i];
}

int main()
{
    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n;

    for(int i = 0; i < n ; i++) cin >> cost[i];

    int ans = solve(n-1);

    cout << ans << "\n";

    return 0;

}