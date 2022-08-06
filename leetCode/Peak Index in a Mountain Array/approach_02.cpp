class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start = 0;
        int end = arr.size() - 1;
        
        while(start < end){
            
            int mid = start + (end - start)/2;
            
            if(mid < end){
                if(arr[mid] < arr[mid+1]){
                    start = mid + 1;
                }
                else if(arr[mid] > arr[mid+1]){
                    end = mid;   
                }
            }
        }
        
        // At the end both start and end will be pointing to the same element which is our desired index. So, we can return any of them.
        
        return start;
    }
};