class Solution {
public:
        vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> result(temperatures.size(), 0);  // Initialize the result array with 0s
    stack<int> s;  // Stack to store the indices of temperatures
    
    for (int i = 0; i < temperatures.size(); ++i) {
        // Check if the current temperature is greater than the temperature at the index stored in the stack
        while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
            int idx = s.top();
            s.pop();
            result[idx] = i - idx;  // Calculate the difference in days
        }
        s.push(i);  // Push the current index to the stack
    }
    
    return result;
}
};