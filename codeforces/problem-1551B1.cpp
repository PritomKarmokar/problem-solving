#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        string str;
        cin>>str;

        int n = str.size();
        int cnt[26] = {0};

        for(int i = 0 ; i < n ; i++) cnt[str[i]-'a']++;

        int diff = 0, ans = 0;

        for(int i = 0 ; i < 26 ; i++){
            if(cnt[i] > 1) ans += 1;
            else if(cnt[i] == 1) diff++;
        }

        ans += diff/2;

        cout<<ans<<endl;      

    }
    return 0;
}