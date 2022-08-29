class Solution {
public:
    bool isAnagram(string a, string b)
    {
        if(a.size() != b.size()) return false;
        
        int cnt[26] = {0};
        
        int n = a.size();
        
        for(int i = 0; i < n; i++){
            cnt[a[i]-'a']++;
            cnt[b[i]-'a']--;
        }
        
        for(int i = 0; i < 26; i++){
            if(cnt[i]) return false;
        }
        
        return true;
    }
    
    vector<string> removeAnagrams(vector<string>& words) {
        
        int n = words.size();
        
        vector<string> result;
        
        int i = 0;
        
        while(i < n){
           int j = i + 1;
            while(j < n && isAnagram(words[i], words[j]))
                j++;
            result.push_back(words[i]);
            i = j;
        }
        
        return result;
    }
};