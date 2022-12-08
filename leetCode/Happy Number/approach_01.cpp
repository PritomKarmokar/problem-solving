class Solution {
public:

    int sumOfSquares(int n)
    {
        int sum = 0;

        while(n != 0){
            int m = n % 10;
            sum += m * m;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {

        set<int> st;

        while(n != 1){
            n = sumOfSquares(n);
            if(st.count(n))
                return false;
            st.insert(n);
        }

        return true;
    }
};