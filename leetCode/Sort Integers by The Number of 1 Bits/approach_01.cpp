class Solution {
public:
    static bool comp(int a, int b)
    {
        // '__builtin_popcount(num) ' -- this function returns the no. 1's in the num's binary representation.
        int p1 = __builtin_popcount(a);  
        int p2 = __builtin_popcount(b);
        
        if(p1 == p2) return a < b;  // if both of them contains equal no of 1 bit then return values in ascending order.
        
        return p1 < p2; // else return the values which contain more 1's in their binaray representation
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(), arr.end(), comp); // 'external comparator function' is used in the stl sort function.
        
        return arr;
    }
};