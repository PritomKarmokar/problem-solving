class Solution {
public:

    void generate(int n, int open, int close, string brace, vector<string> &res)
    {
        if(open == n && close == n){
            res.push_back(brace);
            return;
        }

        if(open < n){
            generate(n, open + 1, close, brace + '(', res);
        }

        if(open > close){
            generate(n , open, close + 1, brace + ')', res);
        }
    }

    vector<string> generateParenthesis(int n) 
    {        
        vector<string> res;
        generate(n, 0 , 0 , "", res);

        return res;
    }
};