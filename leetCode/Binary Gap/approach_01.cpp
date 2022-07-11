class Solution {
public:
    int binaryGap(int n) {
        
        vector< int > bin;
        
        while(n != 0){
            bin.push_back(n%2);
            n /= 2;
        }
        
        int m = bin.size();
        int ans = 0;
        vector< int > ones;
        
        for(int i = 0; i < m ; i++){
            if(bin[i] == 1) ones.push_back(i);
                
            if(ones.size() == 2){
                ans = max(ans , ones[1] - ones[0]);
                ones.erase(ones.begin()) ; // removing first element from the "ones" vector in order to store the next 1's postion
            }
        }
        
        return ans;
    }
};