class Solution {
public:
    int findMin(vector<int>& nums) {
        while(nums.size() > 1){
            int mid = nums.size() / 2;
            int lastElementOfFirstHalf = nums[mid-1];
            int lastElementOfSecHalf = nums.back();
            if(lastElementOfFirstHalf < lastElementOfSecHalf){
                nums.erase(nums.begin()+mid, nums.end());
            }
            else{
                nums.erase(nums.begin(), nums.begin()+mid);
            }
        }
        return nums[0];
    }
};