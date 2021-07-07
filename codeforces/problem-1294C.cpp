#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        set<int> used;
        int limit = sqrt(n);

        for(int i = 2 ; i <= limit ; i++){
            if(n%i == 0 and !used.count(i)){
                used.insert(i);
                n /= i;
                break;
            }
        }

        for(int i = 2; i <= limit ; i++){
            if(n%i == 0 and !used.count(i)){
                used.insert(i);
                n /= i;
                break;
            }
        }

        if(int(used.size()) < 2 || used.count(n) || n == 1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            used.insert(n);
            for(auto i: used) cout<<i<<" ";
            cout<<endl;
        }
    }

    return 0;
}