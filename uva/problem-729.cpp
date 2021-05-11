#include<bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt", "w",stdout);

    int tc;
    cin>>tc;

    while(tc--){
        int n, h;
        cin>>n>>h;

        string w;

        int r = n-h;
        for(int i = 0 ; i < r; i++) w += '0';
 
        for(int i = 0 ; i < h; i++) w += '1';

        do{
            cout<<w<<endl;
        }while(next_permutation(w.begin(),w.end()));
        
        if(tc != 0)
            cout<<endl;
    }
}