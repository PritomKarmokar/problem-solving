/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int l = 0;
        int h = mountainArr.length() - 1;

        int peakIndex = FindPeakIndex(mountainArr);
        int firstTry = binarySearch(mountainArr, target, 0 , peakIndex, true);
         
        if(firstTry != -1)
            return firstTry;
        
        return binarySearch(mountainArr, target, peakIndex+1, h, false);
    }
    
    int FindPeakIndex(MountainArray &mountainArr){
        int l = 0;
        int h = mountainArr.length() - 1;
        
        while(l < h){
            int m = l + (h - l)/2;
            int curVal = mountainArr.get(m);
            if(curVal < mountainArr.get(m+1))
                l = m + 1;
            else if(curVal > mountainArr.get(m+1))
                h = m;
        }
        
        return l;
    }
    
    int binarySearch(MountainArray &mountainArr, int target, int l , int h, bool isAsc){
    
        while(l <= h){
            int m = l + (h - l)/2;
            int curVal = mountainArr.get(m);
            
            if(curVal == target)
                return m;
            if(isAsc){
                if(curVal < target)
                    l = m + 1;
                else if(curVal > target)
                    h = m - 1;
            }
            else{
                if(curVal > target)
                    l = m + 1;
                else 
                    h = m - 1;
            }
        }
        
        return -1;
        
    }
};