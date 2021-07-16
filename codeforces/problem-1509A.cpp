#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        vector<int> od, ev;

        for(int i = 0 ; i < n ; i++){
            int x; cin>>x;
            if(x%2) od.push_back(x);
            else ev.push_back(x);
        }

        for(auto i: od) cout<<i<<" ";
        for(auto i: ev) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}