#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r", stdin);
    int n;
    cin>>n;

    int h[n], m[n];
    for(int i=0; i<n; i++) cin>>h[i]>>m[i];

    int ans = 1;
    int mx = 1;

    for(int i=1; i<n;i++){
        if(h[i] == h[i-1] && m[i] == m[i-1]) ans++;
        else ans=1;
        mx = max(mx,ans);
    }
    cout<<mx<<endl;

    return 0;
}