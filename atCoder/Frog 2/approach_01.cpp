// Similar approach as 'Frog 1' problem but here the frog can jump k-steps from its initial position and we need to consider this for solving the problem.

#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 5;
int hi[mx];
int dp[mx];
int k;

int func(int i)
{
    if(i == 0) return 0;
    if(dp[i] != -1) return dp[i];

    int min_steps = INT_MAX;

    for(int j = 1; j <= k ; j++){
        if(i - j >= 0){
            int steps = func(i - j) + abs(hi[i] - hi[i-j]);
            min_steps = min(min_steps, steps);
        }
    }

    dp[i] = min_steps;

    return dp[i];
}

int main()
{
    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> hi[i];

    int min_steps = func(n - 1);

    cout << min_steps << "\n";

    return 0;
}