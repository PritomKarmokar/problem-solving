#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> val;

    val["Tetrahedron"] = 4;
    val["Cube"] = 6;
    val["Octahedron"] = 8;
    val["Dodecahedron"] = 12;
    val["Icosahedron"] = 20;

    int n;
    cin>>n;

    string x;

    int ans = 0;

    for(int i = 0; i < n ; i++){
        cin>>x;
        if(val.count(x) > 0) ans += val[x];
    }

    cout<<ans<<endl;
    
}