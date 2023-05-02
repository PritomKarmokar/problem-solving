class Solution {
public:
    double average(vector<int> &salary)
    {
        sort(salary.begin(), salary.end());
        int n = salary.size();

        double total = 0;
        for(int i = 1; i < n-1; i++){
            total += (double) salary[i];
        }

        return (total/(n-2));
    }
};