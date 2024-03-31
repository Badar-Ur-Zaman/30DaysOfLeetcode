class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 0){
            return {};
        }
        vector<vector <int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int>tempInterval = intervals[0];

        for(auto it: intervals){
            if(it[0] <= tempInterval[1]){
                tempInterval[1] = max(it[1], tempInterval[1]);
            }else{
                ans.push_back(tempInterval);
                tempInterval = it;
            }
        }
        ans.push_back(tempInterval);
        return ans;
    }
};