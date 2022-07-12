class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector< int > arr;
        
        arr.push_back(first);
        
        int ans = first;
        int n = encoded.size();
        
        for(int i = 0; i < n ; i++){
            ans = (ans ^ encoded[i]);
            arr.push_back(ans);
        }
        
        return arr;
    }
};