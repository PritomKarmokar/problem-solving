#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin>>a>>b;

    double ans1 = b * log10(a) ; //a^b;
    double ans2 = a * log10(b) ; //b^a;

    //cout<<"ans1 = "<<ans1<<" ans2 = "<<ans2<<"\n";
    if(a == b || (abs(ans1-ans2) < 1e-9)) cout<<"=";
    else if(ans1 > ans2) cout<<">";
    else cout<<"<";

    cout<<"\n";
    return 0;
}