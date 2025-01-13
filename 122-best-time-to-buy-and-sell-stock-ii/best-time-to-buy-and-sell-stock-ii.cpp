class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0, max = 0;
        for(int i = 0; i < prices.size()-1; i++){
            if(prices[i] < prices[i+1]){
                diff = prices[i+1] - prices[i];
                max += diff;
            }
        }
        return max;
    }
};