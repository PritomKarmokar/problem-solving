// Time complexity need to be reduced.

class Solution {
public:
    bool checkInclusion(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    
    sort(s1.begin(), s1.end());

    for(int i = 0; i < m - n + 1; i++){
        string t = s2.substr(i, n);
        sort(t.begin(), t.end());
        if(t == s1) return true;
    }
    return false;
}
};