// Need to improve the solution
class Solution {
public:
 vector<vector<int>>fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> st;

        for(int i = 0; i < n-3; i++){

            long int first = target - nums[i];

            for(int j = i+1; j < n-2; j++){
                long int sec = first - nums[j];
                long int s = j + 1;
                long int e = n - 1;
                while(s < e){
                    long int sum = nums[s] + nums[e];
                    if(sum > sec) e--;
                    else if(sum < sec) s++;
                    else{
                        if(!st.count({nums[i], nums[j], nums[s], nums[e]})){
                            ans.push_back({nums[i], nums[j], nums[s], nums[e]});
                            st.insert({nums[i], nums[j], nums[s], nums[e]});
                        }
                        s++;
                    }
                }
            }
        }

        return ans;
    }
};