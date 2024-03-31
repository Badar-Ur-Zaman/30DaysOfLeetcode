class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int iter = 0;
        int size = intervals.size();
        vector<vector <int>> ans;

        while(iter < size && intervals[iter][1] < newInterval[0]){
            ans.push_back(intervals[iter++]);
        }
        vector<int> overlapInterval = newInterval;

        while(iter < size && intervals[iter][0] <= newInterval[1]){
            overlapInterval[0] = min(intervals[iter][0], overlapInterval[0]);
            overlapInterval[1] = max(intervals[iter][1], overlapInterval[1]);
            iter++;
        }
        ans.push_back(overlapInterval);

        while(iter < size){
            ans.push_back(intervals[iter++]);
        }
        return ans;
    }
};