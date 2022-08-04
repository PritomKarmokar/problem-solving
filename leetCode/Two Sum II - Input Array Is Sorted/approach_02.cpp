// Solving the problem using binary search.
/* Since this approach is first trying to calculate the next Value to be found for every element left to right and then using binaray search to solve problem so, it is of O(n * log(n)) time complexity */

class Solution {
public:
    
    int search(vector< int > &numbers, int target, int start, int end)
    {
        while(start <= end){
            int mid = start + (end - start)/2;
            if(numbers[mid] == target){
                return mid;
            }
            else if(numbers[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return -1;
    }
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size() - 1;
        
        vector< int > ans(2, 0); // creating a vector with 2 elements and initializing them to 0 at first.
        
        for(int i = 0; i < n; i++){
            int nextTofind = target - numbers[i];
            int searchResult = search(numbers, nextTofind, i + 1, n);
            if(searchResult != -1){
                ans[0] = i + 1;
                ans[1] = searchResult + 1;
                break;
            }
        }
        
        return ans;
    }
};