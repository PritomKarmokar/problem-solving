#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    string key = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int n = (int)key.size();

    string str;

    while(getline(cin,str)){
        //cout<<str<<endl;

        int l = (int)str.size();

        for(int i = 0; i < l ; i++){
            char ch = str[i];
            if(ch == ' ')   cout<<" ";
            else{
                for(int j = 0 ; j < n ; j++){
                    if(ch == key[j]) cout<<key[j-1];
                }
            }
        }
        str.clear();
        cout<<endl;
    }

    return 0;

}
