// Solved it via simple recursion.
class Solution {
public:
    int steps = 0;
    int numberOfSteps(int num) {
        if(num == 0) return steps;
        steps += 1;
        if(num % 2)
            return numberOfSteps(num-1);
        else 
            return numberOfSteps(num/2);
        
    }
};