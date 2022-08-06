// Using linear search approach. Although the question says to implement the solution using 'Binary Search'. No problem, see approach_02.cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int index = 0;
        
        for(int i = 1 ; i < n ; i++){
            if(arr[i-1] > arr[i]){
                index = i-1;
                break;
            }
        }
        
        return index;
    }
};