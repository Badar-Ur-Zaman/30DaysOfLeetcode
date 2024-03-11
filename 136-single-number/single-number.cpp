class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // From tips section, hint is indicating that we can use bit manipulation.
        // So lets do it with XOR property of bitwise operation
        int ans = 0; // XOR of 0 with any number is the number itself
        for (int i = 0; i < nums.size(); i++){
            ans ^= nums[i];
        }
        return ans;
    }
};