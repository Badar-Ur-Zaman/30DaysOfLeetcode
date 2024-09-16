class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> posTime(n);

        
        for (int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i]; 
            posTime[i] = {position[i], time};
        }

        sort(posTime.begin(), posTime.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
            return a.first > b.first;
        });

        int fleets = 0;
        double lastFleetTime = 0;

        for (int i = 0; i < n; i++) {
            if (posTime[i].second > lastFleetTime) {
                fleets++;
                lastFleetTime = posTime[i].second; 
            }
        }

        return fleets;
    }
};