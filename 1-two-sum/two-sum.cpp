class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>elementAndItsIndices;
        for(int i = 0; i < nums.size(); i++){
            elementAndItsIndices[nums[i]] = i;
        }
        int x,y;
        for(int i = 0; i < nums.size(); i++){
            x = i;
            int secondTarget = target - nums[i];

            auto it = elementAndItsIndices.find(secondTarget);
            if(it != elementAndItsIndices.end() && it->second != i){
                y = it->second;
                break;
            }
        }
        vector<int>result;
        result.push_back(x);
        result.push_back(y);
        return result;
    }
};