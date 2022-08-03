// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// isBadVersion(int version) = 'true' --> means this version is bad and 'false' --> means not bad.

// Finding the left most bad version using Binary Search.
class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            if(isBadVersion(mid)){
                end = mid - 1;  // try to search in the left portion if any other badVersion occurs or not
            }
            else{
                start = mid + 1;
            }
        }
        
        return start;
    }
};