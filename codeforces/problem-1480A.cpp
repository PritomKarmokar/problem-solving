#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        string w;
        cin>>w;

        int n = w.size();

        for(int i = 0 ; i < n ; i++){
            if(i%2 == 0){
                int ch = 'a' - w[i];
                if(ch >= 0) w[i] = 'a' + 1;
                else w[i] = 'a'; 
            }
            else{
                int ch = 'z' - w[i];
                if(ch > 0) w[i] = 'z';
                else w[i] = 'z' - 1;
            }
        }
        cout<<w<<endl;
    }
    return 0;
}