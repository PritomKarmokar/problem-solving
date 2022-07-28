// problem link : https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
// External comparsion operator is used with builtin 'sort' function.
#include<bits/stdc++.h>
using namespace std;

bool comp(pair< string, int > a, pair< string, int > b)
{   
    if(a.second != b.second)
        return a.second > b.second;
    
    return a.first < b.first;
}

int main()
{
    int n;
    cin>>n;

    vector< pair < string, int >> pi(n);
    for(int i = 0; i < n; i++){
        cin>>pi[i].first>>pi[i].second;
    }

    sort(pi.begin(), pi.end(), comp);
    

    for(auto val: pi){
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}