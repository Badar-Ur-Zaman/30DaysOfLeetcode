class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxProfit = 0;

        for (int num : prices){
            if(num < min){
                min = num;
            }
            maxProfit=max(maxProfit, num-min);
        }
        return maxProfit;
    }
};