#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    char ch = getchar();

    while(tc--){
        string line;
        getline(cin,line);

        stringstream ss(line);

        int num;
        vector<int> v;

        while(ss>>num) v.push_back(num);
        
        int gcd = INT_MIN;
        int n = (int)v.size();

        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1; j < n ; j++){
                gcd = max(gcd, __gcd(v[i],v[j]));
            }
        }

        cout<<gcd<<"\n";

    }
    return 0;
}