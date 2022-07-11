class Solution {
public:
    int binaryGap(int n) {
        
        vector< int > ones;
        int l = 0;
        
        while(n != 0){
            if(n & 1) ones.push_back(l);
            n >>= 1;
            l++;
        }
        
        int m = ones.size();
        int ans = 0;
        
        for(int i = 1; i < m ; i++){
            ans = max(ans , ones[i] - ones[i-1]);
        }
        
        return ans;
    }
};