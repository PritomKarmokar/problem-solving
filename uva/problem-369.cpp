#include<bits/stdc++.h>
using namespace std;

int table[102][102];

int nCr(int n, int r)
{
    if(n == r || r == 0) return 1;
    if(r == 1) return n;

    if(table[n][r]) return table[n][r];

    table[n][r] = nCr(n-1, r-1) + nCr(n-1, r);

    return table[n][r];
}

int main()
{
    while(true){
        int n, r;
        cin>>n>>r;

        if(n == 0 and r == 0) break;

        int ans = nCr(n,r);

        cout<<n<<" things taken "<<r<<" at a time is "<<ans<<" exactly.\n";

        memset(table , 0, sizeof(table));
    }

    return 0;
}