#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); 

    int tc;
    cin>>tc;

    while(tc--)
    {
        int n;
        cin>>n;

        int arr[n];
        map<int, int> cnt;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            cnt[arr[i]]++;
        }

        vector<int> diff;
        for(auto x: cnt){
            if(x.second == 1) diff.push_back(x.first);
        }

        if(diff.size() == 0) cout<<"-1"<<endl;
        else{
            sort(diff.begin(), diff.end());
            for(int i = 0 ; i < n ; i++){
                if(diff[0] == arr[i]) cout<<i+1<<endl;
            }
        }
    }
    return 0;
}