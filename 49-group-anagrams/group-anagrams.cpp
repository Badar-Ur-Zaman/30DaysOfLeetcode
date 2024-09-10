class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> origStr = strs;
        for (auto &i : strs) {
            sort(i.begin(), i.end());
        }
        unordered_map <string, vector<int>> wordMap;
        for (int i = 0; i < strs.size(); i++){
            string element = strs[i];
            wordMap[element].push_back(i);
        }

        vector<vector<string>> result;
        for (auto& pair: wordMap){
            vector<string> innerResult;
            for (int i = 0; i < pair.second.size(); i++){
                innerResult.push_back(origStr[pair.second[i]]);
            }
            result.push_back(innerResult);
        }
        return result;
    }
};