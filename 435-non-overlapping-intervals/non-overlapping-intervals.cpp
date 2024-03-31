class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1){
            return 0;
        }

        sort(intervals.begin(), intervals.end());
        int end = intervals[0][1];
        
        int count = 0;

        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] < end){
                ++count;
                end = min(intervals[i][1], end);
            }else{
                end = intervals[i][1];
            }
        }
        
        return count;

    }
};