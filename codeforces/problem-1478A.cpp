#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    fast;
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int cnt[101] = {0};
        for(int i = 0 ; i < n ; i++){
            int x; cin>>x;
            cnt[x]++;
        }

        int mx = 0;
        for(int i = 1; i < 101; i++){
            if(cnt[i]) mx = max(mx, cnt[i]);
        }

        cout<<mx<<endl;
    }

    return 0;
}