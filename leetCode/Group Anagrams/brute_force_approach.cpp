#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if(s.size() != t.size()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return (s == t);
}

vector< vector<string>> groupAnagrams(vector<string> &strs)
{
    int n = strs.size();
    vector < vector<string>> res;
    set <string> st;

    for(int i = 0; i < n; i++){
        string cur = strs[i];
        vector< string > tmp;

        if(!st.count(cur)){
            tmp.push_back(cur); 
            st.insert(cur);
        }

        for(int j = i + 1; j < n; j++){
            string next = strs[j];

            if(st.count(next) == 0 && isAnagram(cur, next)){
                tmp.push_back(next);
                st.insert(next);
            }
        }

        if(!tmp.empty()){
            res.push_back(tmp);
        }
    }

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int n ;
    cin >> n;

    vector<string> strs(n);
    for(int i = 0; i < n; i++) cin >> strs[i];

    for(auto str: strs){
        cout << str << " ";
    }
    cout << endl;

    vector< vector<string>> res = groupAnagrams(strs);

    for(auto words: res){
        for(auto word: words){
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}