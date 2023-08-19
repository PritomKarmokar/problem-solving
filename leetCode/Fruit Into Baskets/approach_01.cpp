class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0, r = 0;
        int res = INT_MIN;
        map<int, int> mp;

        while(r < n){
            mp[fruits[r]]++;
            
            if(mp.size() <= 2) res = max(res, r - l + 1);
            else{
                mp[fruits[l]]--;

                if(mp[fruits[l]] == 0) mp.erase(fruits[l]);

                l++;
            }
            r++;
        } 

        return
    }
};