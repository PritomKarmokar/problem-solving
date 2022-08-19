// Solving the problem using bottom-up dp approach.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cost[n];
    for(int i = 0; i < n; i++) cin >> cost[i];

    int dp[n] = {0};

    for(int i = 1; i < n; i++){
        int cost1 = dp[i-1] + abs(cost[i] - cost[i-1]);
        int cost2 = INT_MAX;
        if(i > 1){
            cost2 = dp[i-2] + abs(cost[i] - cost[i-2]);
        }

        dp[i] = min(cost1, cost2);
    }

    cout << dp[n-1] << "\n";

    return 0;

}