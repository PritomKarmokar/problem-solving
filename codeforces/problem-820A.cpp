#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int c , v0, v1, a, l;
    cin>>c>>v0>>v1>>a>>l;

    c -= v0;
    int days = 1;
    if(c <= 0) cout<<"1\n";
    else{
        while(c > 0){
            v0 = v0 + a;
            if(v0 > v1) v0 = v1;
            c = c - (v0-l);
            days++;
        }
        cout<<days<<endl;
    }

}

int main()
{
    solve();
}