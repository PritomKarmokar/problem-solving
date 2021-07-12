#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        string a, b, d;
        cin>>n>>b;

        a += '1';
        if(b[0] == '1') d += '2';
        else d += '1';

        for(int i = 1; i < n ; i++){
            if(d[i-1] == '2'){
                if(b[i] == '1') a += '0', d += '1';
                else if(b[i] == '0') a += '1', d += '1';
            }
            else if(d[i-1] == '1'){
                if(b[i] == '0') a += '0', d += '0';
                else if(b[i] == '1') a += '1', d += '2';
            }
            else if(d[i-1] == '0') 
                if(b[i] == '0')a += '1', d += '1';
                else if(b[i] == '1') a += '1', d += '2';
        }
        cout<<a<<endl;
        //cout<<"d = "<<d<<endl;
    }
    return 0;
}