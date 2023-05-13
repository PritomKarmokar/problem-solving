class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        if(s1.size() > s2.size()) return false;
        
        int n = s1.size();
        int m = s2.size();
        vector<int> cnt1(26, 0), cnt2(26, 0);

        int l = 0, r = 0;
        while(r < n)
        {
            cnt1[s1[r] - 'a']++;
            cnt2[s2[r] - 'a']++;
            r++;
        }

        r -= 1;
        while(r < m){
            if(cnt1 == cnt2) return true;
            r += 1;
            if(r != m)
                cnt2[s2[r] - 'a'] += 1;

            cnt2[s2[l] - 'a'] -= 1;
            l += 1;
        }
        
        return false;
    }
};