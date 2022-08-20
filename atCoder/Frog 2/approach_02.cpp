#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int hi[n];
    for(int i = 0; i < n; i++) cin >> hi[i];

    int dp[n] = {0};

    for(int i = 1; i < n; i++){
        int min_steps = INT_MAX ;
        for(int j = 1; j <= k; j++){
            if(i - j >= 0){
                int jumps = dp[i - j] + abs(hi[i] - hi[i - j]);
                min_steps = min(min_steps, jumps);
            }
        }

        dp[i] = min_steps;
    }

    cout << dp[n-1] << "\n";

    return 0;
}