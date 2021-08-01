#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        int l = 2*n;
        vector<int> od, ev;

        for(int i = 1; i <= l ; i++){
            int x;  cin>>x;
            if(x%2) od.push_back(i);
            else ev.push_back(i);
        }

        int l1 = (int)ev.size();
        int l2 = (int)od.size();

        l1 = l1 - l1%2;
        l2 = l2 - l2%2;
        
        int t = 0;

        for(int i = 0 ; i <l1; i+=2){
            if(t == n-1) break;
            t++;
            cout<<ev[i]<<" "<<ev[i+1]<<endl;           
        }

        //cout<<"t = "<<t<<" n-1 = "<<n-1<<endl;
        
        for(int i = 0; i <l2 ; i+=2){
            if(t == n-1) break;
            t++;
            cout<<od[i]<<" "<<od[i+1]<<endl;
        }
        
    }
    return 0;
}