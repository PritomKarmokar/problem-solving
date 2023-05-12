class Solution {
public:
    int characterReplacement(string s, int k)
    {
        int n = s.size();
        int i = 0;
        int j = 0;

        vector<int> count(26);
        int res = 0;
        int maxLength = 0;

        while(j < n){
            count[s[j] - 'A']++;
            maxLength = max(maxLength, count[s[j] - 'A']);

            if(j - i + 1 - maxLength > k){
                count[s[i] - 'A']--;
                i++;
            }
            res = max(res, j - i + 1);
            j++;
        }

        return res;
    }
};