//https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
/* 
    I have used sieve method but it's not needed since the number range is given in 10^6 and highest number
    in this range doesn't contain above 31 "1" bits. See "approach_02.cpp".
*/
class Solution {
public:
    
    int N = 1e6 + 5;
    bool status[1000005];
    
    void sieve()
    {
        status[0] = status[1] = 1;
        
        for(int i = 4; i <= N; i+=2) status[i] = 1;
        
        int sqrtN = sqrt(N);
        
        for(int i = 3; i <= sqrtN ; i+=2){
            if(!status[i]){
                for(int j = i*i ; j < N ; j+= i+i)
                    status[j] = 1;
            }
        }
    }
    
    int countPrimeSetBits(int left, int right)
    {
        sieve();

        int total = 0;

        for(int i = left; i <= right ; i++){
            int cntBit= __builtin_popcount(i);
            if(!status[cntBit]) {
                total += 1;
            }
        }

        return total;
    }

};