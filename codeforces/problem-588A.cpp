#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int mn = INT_MAX;
    int total = 0;

    for(int i = 0 ; i < n ; i++){
        int a, p;
        cin>>a>>p;
        mn = min(mn,p);
        total += mn*a;
    }
    cout<<total<<endl;

    return 0;
}