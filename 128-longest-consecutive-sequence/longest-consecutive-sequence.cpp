class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int counter = 1, longest = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i]-1 == nums[i-1]){
                counter++;
            }else if(nums[i] == nums[i-1]){
                continue;
            }else{
                longest = max(longest, counter);
                counter = 1;
            }
        }
        return max(longest, counter);
    }
};