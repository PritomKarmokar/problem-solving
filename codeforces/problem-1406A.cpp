#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int x ;
        int t[101] = {0}, t1[101] = {0} , t2[101] = {0};

        for(int i = 0 ; i < n ; i++){
            cin>>x;
            t[x]++;
            if(t[x] == 1) t1[x]++;
            else if(t[x] > 1) t2[x]++;
        }

        int mexA = 0, mexB = 0;
        
        for(int i = 0 ; i < 101; i++){
            if(!t1[i]){
                mexA = i;
                break;
            }
        }

        for(int i = 0 ; i < 101; i++){
            if(!t2[i]){
                mexB = i;
                break;
            }
        }

        cout<<mexA+mexB<<endl;
    }
    return 0;
}