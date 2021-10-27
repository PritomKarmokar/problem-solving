#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    // freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);

    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int arr[n];
        int mn = INT_MAX, mx = INT_MIN;
        int min_index = -1, max_index = -1;

        for(int i = 0; i < n ; i++) {
            cin>>arr[i];
            if(arr[i] >= mx) mx = arr[i], max_index = i;
            if(arr[i] <= mn) mn = arr[i], min_index = i;
        }

        int ans1 = 0;
        bool cnt_1[105] = {0};

        for(int i = 0 ; i < n ; i++){
            if(arr[i] == mx) cnt_1[mx] = 1;
            if(arr[i] == mn) cnt_1[mn] = 1;
            ans1++;
            if(cnt_1[mx] == 1 && cnt_1[mn] == 1) break;
        }

        int ans2 = 0;
        bool cnt_2[105] = {0};

        for(int i = n-1; i >= 0; i--){
            if(arr[i] == mx) cnt_2[mx] = 1;
            if(arr[i] == mn) cnt_2[mn] = 1;
            ans2++;
            if(cnt_2[mx] == 1 && cnt_2[mn] == 1) break;
        }

        int op1 = min(min_index+1, n-min_index);
        int op2 = min(max_index+1, n-max_index);

        int ans3 = op1+op2;

        //printf("ans1 = %d, ans2 = %d, ans3 = %d\n", ans1, ans2, ans3);
        int ans = min(ans1, min(ans2, ans3));

        cout<<ans<<"\n";
    }

    return 0;
}