class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size(),1);
        vector<int>postfix(nums.size(),1);
        vector<int>result(nums.size(), 1);

        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }

        for(int j = nums.size()-2; j >= 0; j--){
            postfix[j] = postfix[j+1]*nums[j+1];
        }

        int k;
        for(k = 0; k < result.size(); k++){
            result[k] = postfix[k]*prefix[k];
        }
        
        return result;
    }
};