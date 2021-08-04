#include<bits/stdc++.h>
using namespace std;

int main()
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    
    int tc;
    cin>>tc;

    while(tc--){
        string str;
        cin>>str;

        int n = (int)str.size();
        int l = -1, r = -1;
        for(int i = 0 ; i < n ; i++){
            if(str[i] == 'a'){
                l = i-1;
                r = i+1;
                break;
            }
        }

        if(l == -1 and r == -1) cout<<"NO\n";
        else{
            bool ok = 1;
            int i = 1;
            while(l >= 0 or r < n){
                if(str[l] == alpha[i]) l--;
                else if(str[r] == alpha[i]) r++;
                else {
                    ok = 0;
                    break;
                }
                i++;
            }
            if(ok) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}