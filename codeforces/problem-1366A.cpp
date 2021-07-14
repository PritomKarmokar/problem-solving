#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int a, b, c;
        cin>>a>>b;

        c = (a+b)/3;

        int ans = min(a,min(b,c));

        cout<<ans<<endl;
    }

    return 0;
}
