#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    int tc;
    cin>>tc;

    while(tc--){
        string text;
        cin>>text;

        int l = text.size();

        if(l%2 != 0) cout<<"NO\n";
        else{
            int cnt_b = 0;

            for(int i = 0; i < l ; i++){
                if(text[i] == 'B') cnt_b++;
            }

            if(cnt_b == (l/2)) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

    return 0;
}