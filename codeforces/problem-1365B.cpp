#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        vector<int> a(n), b(n);

        for(int i = 0 ; i < n ; i++) cin>>a[i];
        
        set<int> st;
        for(int i = 0 ; i < n ; i++) {
            cin>>b[i]; st.insert(b[i]); 
        }

        if((int)st.size() == 1){
            vector<int> c = a;
            sort(c.begin(), c.end());
            if(c == a) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"YES\n";
        
    }
    return 0;
}