class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(), nums.end());
        for(int num: nums){
            if(num != i){
                return i;
            }
            i++;
        }
        return i;
    }
};