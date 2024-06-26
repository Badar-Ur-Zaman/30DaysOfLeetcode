class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 2) return {};
        vector<vector <int> > result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++){
            if(i == 0 || nums[i] != nums[i-1]){
                int j = i + 1, k = nums.size() - 1;
                while(j < k){
                    int ans = nums[i] + nums[j] + nums[k];
                    if(ans == 0){
                        result.push_back({nums[i], nums[j], nums[k]});
                        while(j < k && nums[j] == nums[j+1]){ j++; }
                        while(j < k && nums[k] == nums[k-1]){ k--; }
                        j++;
                        k--;
                    }else if(ans > 0){
                        k--;
                    }else if(ans < 0){
                        j++;
                    }
                }
            }
            
        }
        return result;
    }
};