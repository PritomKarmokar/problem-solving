class Solution {
public:
    
    string convertToLower(string &s){
        
        int n = s.size();
        string t = "";
        
        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(isupper(ch)) t += tolower(ch);
            else if(isdigit(ch) || islower(ch)) t += ch;
            else continue;
        }
        
        return t;
        
    }
    
    bool isPalindrome(string s) {
        
        string t = convertToLower(s);
        
        int l = t.size();
        for(int i = 0, j = l-1; i <= j; i++, j--){
            if(t[i] != t[j]) return false;
        }
        
        return true;
    }
};