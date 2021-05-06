#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, a, b, c;
    cin>>n>>a>>b>>c;

    ll mini = 0;

    ll req = 4 - n%4;

    if(req == 1){
        mini = min(a,min(3*c,b+c));
    }
    else if(req == 2){
        mini = min(b,min(2*a,2*c));
    }
    else if(req == 3){
        mini = min(c,min(a+b,3*a));
    }
    //if req == 0 that means mini 0 it normally print

    // cout<<"req = "<<req<<" mini = "<<mini<<endl;
    cout<<mini<<"\n";

    return 0;
}