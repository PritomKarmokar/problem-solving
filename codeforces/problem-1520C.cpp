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

        if(n == 1) cout<<"1\n";
        else if(n == 2) cout<<"-1\n";
        else{
            int x = n*n;

            for(int i = 1; i <= n ; i++){
                for(int j = 1; j <= n ; j++){
                   cout<<x<<" ";
                   x = x-2;
                   if(x < 1) x = n*n - 1;
                }
               cout<<"\n";
            }
        }
    }
    return 0;
}