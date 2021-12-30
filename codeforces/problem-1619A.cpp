#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc;
    cin>>tc;

    while(tc--){
        string str;
        cin>>str;

        int l = str.size();

        if(l%2 != 0) cout<<"NO\n";
        else{
            bool ok = 1;
            int mid = l/2;

            for(int i = 0 , j = mid; i < mid; i++, j++){
                //cout<<str[i]<<" "<<str[j]<<" ";
                if(str[i] != str[j]){
                    ok = 0;
                    break;
                }
            }

            if(ok) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}