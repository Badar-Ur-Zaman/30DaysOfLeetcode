class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>count_map;
        for(int i = 0; i < nums.size(); i++){
            count_map[nums[i]]++;
        }
        int result = 0;
        int size = floor(nums.size()/2);
        for(const auto &pair:count_map){
            if(pair.second > size){
                result = pair.first;
                break;
            }
        }
        return result;
    }
};