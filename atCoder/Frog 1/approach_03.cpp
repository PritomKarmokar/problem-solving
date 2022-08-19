// Solving the problem using bottom-up dp approach and reducing the space complexity to O(1).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cost[n];
    for(int i = 0; i < n; i++) cin >> cost[i];

    int prev = 0, prev2 = 0;
    int cur = 0;

    for(int i = 1; i < n; i++){
        int cost1 = prev + abs(cost[i] - cost[i-1]);
        int cost2 = INT_MAX;
        if(i > 1){
            cost2 = prev2 + abs(cost[i] - cost[i-2]);
        }

        cur = min(cost1, cost2);
        prev2 = prev;
        prev = cur;
    }

    cout << cur << "\n";

    return 0;

}