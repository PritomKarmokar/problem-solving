#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    
    while(tc--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if(a == c) c++;
        cout<<a<<" "<<c<<endl;
    }
    return 0;
}