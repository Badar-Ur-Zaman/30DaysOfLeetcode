class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int result = maxProduct;
        for(int i = 1; i < nums.size(); i++){
            int prevMax = maxProduct;
            maxProduct = max({nums[i], nums[i] * maxProduct, nums[i] * minProduct});
            minProduct = min({nums[i], nums[i] * prevMax, nums[i] * minProduct});
            result = max(maxProduct, result);
        }
        return result;
    }
};