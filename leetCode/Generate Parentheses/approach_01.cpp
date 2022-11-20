class Solution {
public:
    
    bool isBalanced(string str)
    {
        stack<char> st;
        int n = str.size();

        for(int i = 0; i < n; i++){
            char ch = str[i];

            if(ch == '('){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;
                else if(ch == ')' && st.top() == '(') st.pop();
            }
        }

        return (st.empty() == true);
    }

    vector<string> generateParenthesis(int n)
    {
        string bracket = "";
        for(int i = 0; i < n ; i++) bracket.push_back('(');
        for(int i = n; i < 2*n ; i++) bracket.push_back(')');

        vector<string> ans;

        do{
            if(isBalanced(bracket))
                ans.push_back(bracket);
        }while(next_permutation(bracket.begin(), bracket.end()));

        return ans;
    }   

};