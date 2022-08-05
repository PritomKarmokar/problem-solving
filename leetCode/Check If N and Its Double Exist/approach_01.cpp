class Solution {
public:
    
    int search(vector< int > &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }

    bool checkIfExist(vector<int>& arr) {

        int n = arr.size();

        sort(arr.begin(), arr.end());

        for(int i = 0; i < n; i++){
            int cur = arr[i];
            int nextTofind = cur + cur;
            int searchIndex = search(arr, nextTofind);
            if(searchIndex!= -1 && searchIndex != i){
                return true;
            }
        }

        return false;
    }
};