#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    fast;
    int tc;
    cin>>tc;

    while(tc--){
        string num;
        cin>>num;

        int n = num.size();

        int cnt[4] = {0};        
        int r = 0, ans = INT_MAX;

        for(int l = 0 ; l < n ; l++){
            while(r < n && 1LL*cnt[1]*cnt[2]*cnt[3] == 0){
                cnt[num[r]-'0']++;
                r++;
            }
            if(1LL*cnt[1]*cnt[2]*cnt[3] > 0) ans = min(ans, r-l);
            cnt[num[l]-'0']--;
        }

        if(ans == INT_MAX) ans = 0; 
        cout<<ans<<"\n";
    }
    return 0;
}