#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
 
int main()
{
    fast;
    int tc;
    cin>>tc;
 
    while(tc--){
        int n;
        cin>>n;
 
        vector<int> arr;
        for(int i = 0 ; i < n ; i++){
            int x; cin>>x;
            arr.push_back(x);
        }
 
        bool ok = 1;
        for(int i = 0 ; i < n ; i++){
            int root = sqrt(arr[i]);
            if(root * root != arr[i]){
                ok = 0;
                break;
            }
        }
 
        if(!ok) cout<<"YES\n";
        else cout<<"NO\n";
 
    }
    return 0;
}