#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        set<int>st;
        for(int i = 0 ; i < n ; i++){
            int x;
            cin>>x;

            if(st.count(x)) x++;

            st.insert(x);
        }

        cout<<(int)st.size()<<endl;
    }
    return 0;
}