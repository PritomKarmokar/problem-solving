#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int cnt = 0, sum = 1;

        while(n > 0){
            n -= sum;
            cnt++;
            sum += 2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}