#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int xa, ya, xb, yb, xf, yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;

        int ans = abs(xa-xb) + abs(ya-yb);

        if(xa == xb and xf == xa and min(ya,yb) < yf and max(ya,yb) > yf)
            ans += 2;
        else if(ya == yb and yf == ya and min(xa,xb) < xf and max(xa,xb) > xf)
            ans += 2;
        cout<<ans<<endl;
    }
    return 0;
}