#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];

    sort(a.begin(), a.end());

    bool ok = false;

    for(int i = 0 ; i < n-2; i++){
        int x = a[i], y = a[i+1], z = a[i+2]; 
        if(x+y > z and y+z > x and x+z > y){
            ok = true;
            break;
        } 
    }
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}