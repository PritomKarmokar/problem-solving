class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        set< char > str(begin(allowed), end(allowed));  // converting a string into set
        int count = 0;
        int n = words.size();
        
        for(int i = 0; i < n; i++){
            bool flag = true;
            int m = words[i].size();
            for(int j = 0; j < m ; j++){
                char ch = words[i][j];
                if(str.count(ch) == 0){
                    flag = false;
                    break;
                }
            }
            if(flag) count += 1;
        }
        
        return count;
        
    }
};