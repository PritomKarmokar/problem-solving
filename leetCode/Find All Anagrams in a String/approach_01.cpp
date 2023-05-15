class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        if(s.size() < p.size()) return {};

        int n = s.size(), m = p.size();
        vector<int> cnt1(128, 0), cnt2(128,0);
        int i = 0, j = 0;

        while(j < m){
            cnt1[p[j]]++;
            cnt2[s[j]]++;
            j++;
        }

        vector<int> res;   

        while(j < n){
            if(cnt1 == cnt2) res.push_back(i);
            cnt2[s[i]]--;
            cnt2[s[j]]++;
            i++, j++;
        }

        if(cnt1 == cnt2) res.push_back(i);
        
        return res;
    }
};