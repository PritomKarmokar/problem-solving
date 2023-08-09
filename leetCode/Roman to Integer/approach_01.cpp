class Solution {
public:
    int romanToInt(string s) {
        
        map < char, int > sym{
            {'I', 1}, {'V', 5}, 
            {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500},
             {'M', 1000}
        };

        int n = s.size();
        int ans = sym[s.back()];

        for(int i = n-2; i >= 0; i--){
            if(sym[s[i]] < sym[s[i+1]]){
                ans -= sym[s[i]];
            }
            else{
                ans += sym[s[i]];
            }
        }

        return ans;
    }
};