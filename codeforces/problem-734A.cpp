#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;

    cin>>n>>str;

    int anton = 0, danik = 0;

    for(int i = 0 ; i < n ; i++){
        if(str[i] == 'A') anton++;
        else danik++;
    }

    if(anton > danik) printf("Anton\n");
    else if(danik > anton) printf("Danik\n");
    else printf("Friendship\n");

    return 0;
}