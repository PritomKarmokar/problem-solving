// problem link - https://cses.fi/problemset/task/1643/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

// We need to use 'long long' since any number can range between '-10^9 to 10^9'

ll maxSubarraySum(vector< ll > &nums)
{
    int n = nums.size();
    ll sum = nums[0];
    ll best = nums[0];

    for(int i = 1; i < n; i++){
        sum = max(sum + nums[i], nums[i]);
        best = max(sum, best);
    }

    return best;
}

int main()
{
    int n;
    cin>>n;

    vector< ll > nums(n);

    for(int i = 0; i < n ; i++) cin>>nums[i];

    ll ans = maxSubarraySum(nums);

    cout<<ans<<endl;

    return 0;
}