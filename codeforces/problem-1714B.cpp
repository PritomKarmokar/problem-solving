#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int tc;
    cin >> tc;

    while(tc--){
        int n ;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        set < int > nums;

        for(int i = n-1; i >= 0; i--){
            if(nums.count(arr[i])){
                break;
            }

            nums.insert(arr[i]);
        }
        int ans = n - nums.size();

        cout << ans << "\n";

    }

    return 0;
}