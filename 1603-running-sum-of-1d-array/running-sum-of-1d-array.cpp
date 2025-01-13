class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 1; i < nums.size(); i++){
                sum = nums[i] + nums[i-1];
                nums[i] = sum;
        }
        return nums;
    }
};