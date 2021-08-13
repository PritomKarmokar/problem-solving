#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    int len_1 = (int)a.size();
    int len_2 = (int)b.size();

    if(a == b) cout<<"-1\n";
    else cout<<max(len_1, len_2)<<"\n";

    return 0;
}