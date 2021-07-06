#include<bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    cin>>num;

    int l = num.size();

    bool ok = 1;

    for(int i = 0 ; i < l ;){
        if(num[i] == '1' and num[i+1] == '4' and num[i+2] == '4')
            i += 3;
        else if(num[i] == '1' and num[i+1] == '4') i += 2;
        else if(num[i] == '1') i += 1;
        else {
            ok = 0;
            break;
        }
        
    }
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}