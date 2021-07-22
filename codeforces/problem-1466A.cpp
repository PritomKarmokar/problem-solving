#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
    fast;

    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0 ; i < n ; i++) {
            cin>>arr[i];
        }
        set<double> st;

        for(int i = 0 ; i < n ; i++){
            for(int j = i+1; j < n ; j++){
                double calc = 0.5*1*(abs(arr[i]-arr[j]));
                st.insert(calc);
            }
        }
        
        cout<<(int)st.size()<<endl;
    }
    return 0;
}