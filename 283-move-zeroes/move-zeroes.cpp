class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1) {
            int result = nums[0];
        }else{
            vector<int> result;
            int count = 0;
            for(int element: nums){
                if(element == 0) count++;
                else result.push_back(element);
            }
            for(int i = 0; i < count; i++){
                result.push_back(0);
            }
            nums = result;
        }
    }
};