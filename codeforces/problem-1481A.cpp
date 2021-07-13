#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int px, py;
        string s;
        cin>>px>>py>>s;

        int n = s.size();

        int xp = 0, xm = 0 , yp = 0, ym = 0;

        for(int i = 0; i < n ; i++){
            if(s[i] == 'U') yp += 1;
            else if(s[i] == 'D') ym -= 1;
            else if(s[i] == 'R') xp += 1;
            else xm -= 1;
        }

        bool ok = 0;
        
        //printf("%d %d %d %d\n", xp, xm, yp, ym);

        if(xp >= px && xm <= px) ok = 1;

        if(ok){
            if(yp >= py && ym <= py) ok = 1;
            else ok = 0;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}