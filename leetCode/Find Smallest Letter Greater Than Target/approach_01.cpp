// Solved the problem using the concept of upperbound and implemented it via binaray search.
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n = letters.size();
        int start = 0;
        int end = n - 1;
        
        while(start <= end){
            
            int mid = start + (end - start)/2;
            
            if(letters[mid] <= target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return letters[ start % n];
    }
};