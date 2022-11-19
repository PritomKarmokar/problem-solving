// I solved the problem using 'long long int' in order to avoid Integer Overflow.

class Solution {
public:
   long long int strToDec(string str)
    {
        long long int dec = 0;
        int i = 0, n = str.size();
        bool flag = false;

        if(str[0] == '-'){
            flag = true;
            i = 1;
        }

        for( ; i < n; i++){
            long long int cur = str[i] - '0';
            dec += cur;
            if(i < n-1) dec *= 10;
        }

        if(flag) dec *= -1;

        return dec;
    }


    bool isOperator(char ch)
    {
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
            return true;

        return false;
    }

    long long int calculation(long long int num1, long long int num2, char op)
    {
        long long int res = 0;

        if(op == '+') res = num1 + num2;
        else if(op == '-') res = num1 - num2;
        else if(op == '/') res = num1 / num2;
        else res = num1 * num2;

        return res;
    }

    long long int evalRPN(vector<string> &tokens)
    {
        int n = tokens.size();

        if(n == 1){
            string cur = tokens[0];

            return strToDec(cur);
        }

        long long int calc = 0;
        stack<long long int> operands;

        for(auto val: tokens){
            if(val.size() == 1 && isOperator(val[0])){ 
                char ch = val[0];
                long long int num2 = operands.top(); //cout << "num2 = " << num2 << endl;
                operands.pop();
                long long int num1 = operands.top(); //cout << "num1 = " << num1 << endl;
                operands.pop();

                calc = calculation(num1, num2, ch);
                operands.push(calc);
                // ans += calc;

                // cout << "num1 = " << num1 << " " << ch << " num2 = " << num2 << " " << calc << endl;

                // cout << num1 << " " << ch << " " << num2 << " = " << calc << endl;
            }
            else{
                long long int curVal = strToDec(val);
                operands.push(curVal);
            }
        }


        return calc;
    }
};