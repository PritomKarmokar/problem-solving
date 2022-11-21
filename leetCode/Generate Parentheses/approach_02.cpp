class Solution {
public:
    void solve(vector<string> &ans, string str, int p, int q, int n)
    {
        if((str.size()) == (2*n)){
            ans.push_back(str);
            return ;
        }

        if(p < n)
            solve(ans, str + "(", p+1, q, n);

        if(q < p)
            solve(ans, str + ")", p, q+1, n);
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;

        solve(ans, "", 0, 0, n);

        return ans;
    }

};