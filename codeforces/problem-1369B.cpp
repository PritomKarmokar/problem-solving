#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
 
    while(tc--){
        int n;
        string w;
        cin>>n>>w;
 
        string x = w;
        sort(x.begin(), x.end());
 
        if(x == w) cout<<w<<endl;
        else{
            int zr = 0, one = 0;
 
            int i = 0;
            while(w[i] != '1'){
                zr++;
                i++;
            }
 
            i = n-1;
 
            while(w[i] != '0'){
                one++;
                i--;
            }
 
            for(i = 0; i <= zr; i++) cout<<"0";
            for(i = 0; i < one; i++) cout<<"1";
            cout<<endl;
        }
    }
    return 0;
}