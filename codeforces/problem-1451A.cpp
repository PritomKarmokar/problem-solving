#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;

        if(n <= 3) cout<<n-1<<endl;
        else{
            if(n%2) cout<<"3\n";
            else cout<<"2\n";
        }
    }

    return 0;
}