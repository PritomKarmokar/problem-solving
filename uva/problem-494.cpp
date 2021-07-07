#include<bits/stdc++.h>

using namespace std;

bool isAlphabet(char ch)
{
    if(ch >= 'a' and ch <= 'z') return 1;
    else if(ch >= 'A' and ch <= 'Z') return 1;

    return 0;
}

int main()
{
    string lines;

    while(getline(cin,lines)){

        int n = lines.size();

        int total = 0;

        for(int i = 0 ; i < n ; ){
            if(isAlphabet(lines[i])){
                total += 1;
                while(isAlphabet(lines[i]))
                    i++;
            }
            else i++;
        }

        cout<<total<<endl;
        lines.clear();
    }
    return 0;
}