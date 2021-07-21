#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        vector<int> w(n+2, 0);
        for(int i = 0 ; i < n ; i++){
            int x; cin>>x;
            w[x]++;
        }

        int ans = 0;

        for(int s = 2; s <= 2*n ; s++){
            int cnt = 0;
            vector<int> v = w;

            for(int i = 1; i <= n ; i++) if(v[i])
            {
                int x = i;
                int y = s-x;

                if(x < 0 or y < 0) continue;
                if(x > n or y > n) continue;

                if(x != y and v[x] > 0 and v[y] > 0){
                    int t = min(v[x], v[y]);
                    v[x] -= t;
                    v[y] -= t;
                    cnt += t;
                }
                else if(x == y and v[x] >= 2){
                    v[x] = v[x]/2;
                    int t = v[x];
                    v[x] -= t;
                    cnt += t;
                }
            }
            ans = max(ans, cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}