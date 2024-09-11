class Solution {
public:

    static bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; 
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() == 1 && k == 1) return nums;
        
        unordered_map<int, int> countElements;

        for (int i = 0; i < nums.size(); i++){
            countElements[nums[i]]++;
        }

        vector <pair<int, int>> result;
        for(const auto& pair: countElements){
            result.push_back({pair.first, pair.second});
        }

        sort(result.begin(), result.end(), comparePairs);

        vector<int> finalResult;
        for(int i = 0; i < k; i++){
            finalResult.push_back(result[i].first);
        }

        return finalResult;
    }
};