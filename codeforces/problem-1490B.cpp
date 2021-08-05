#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int c0 = 0 , c1 = 0 , c2 = 0;
        for(int i = 0 ; i < n ; i++){
            int x; cin>>x;
            if(x%3 == 1) c1++;
            else if(x%3 == 2) c2++;
            else c0++;
        }

        int t = n/3;
        //printf("t = %d, c0 = %d, c1 = %d, c2 = %d\n", t, c0, c1, c2);
        int ans = 0;
        if(c0 > t){
            if(c1 >= t) {
                int ex1 = c1-t;
                int ex2 = c0-t;
                ans = ex1 + ex2*2;
            }
            else if(c2 >= t) {
                int ex1 = c0-t;
                int ex2 = c2-t;
                ans = ex1 + ex2*2;
            }
            else if(c1 < t and c2 < t){
                int need1 = t-c1;
                int need2 = t-c2;
                ans = need1 + 2*need2;
            }
        }
        else if(c1 > t){
            if(c2 >= t) {
                int ex1 = c1-t;
                int ex2 = c2-t;
                ans = 2*ex1 + ex2;
            }
            else if(c2 < t){
                int need1 = t-c0;
                int need2 = t-c2;
                ans = 2*need1 + need2;
                //printf("ans = %d, need1 = %d, need2 = %d\n", ans, need1,need2);
            }
        }
        else if(c2 > t){
            int need1 = t-c0;
            int need2 = t-c1;
            ans = need1 + 2*need2;
        }

        cout<<ans<<endl;
    }
    return 0;
}