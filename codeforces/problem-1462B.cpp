#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        string num;
        cin>>n>>num;

        bool ok = 0;

        if(num[0] == '2' and num[1] == '0' and num[2] == '2' and num[3] == '0')
            ok = 1;
        else if(num[0] == '2' and num[1] == '0' and num[2] == '2' and num[n-1] == '0')
            ok = 1;
        else if(num[0] == '2' and num[1] == '0' and num[n-2] == '2' and num[n-1] == '0')
            ok = 1;
        else if(num[0] == '2' and num[n-3] == '0' and num[n-2] == '2' and num[n-1] == '0')
            ok = 1;
        else if(num[n-4] == '2' and num[n-3] == '0' and num[n-2] == '2' and num[n-1] == '0')
            ok = 1;

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}