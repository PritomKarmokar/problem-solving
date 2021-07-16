#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int t1 = 0, t2 = 0, t3 = 0;

        for(int i = 0 ; i < n ; i++){
            int x; cin>>x;
            if(x == 1) t1++;
            else if(x == 3) t3++;
        }

        cout<<t1+t3<<endl;
    }
    return 0;
}