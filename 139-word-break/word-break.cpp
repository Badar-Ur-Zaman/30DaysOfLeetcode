class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        std::vector<bool> dp(s.length() + 1, false);
        dp[s.length()] = true;

        for (int i = s.length() - 1; i >= 0; --i) {
            for (const std::string& w : wordDict) {
                if (i + w.length() <= s.length() && s.substr(i, w.length()) == w) {
                    dp[i] = dp[i + w.length()];
                }
                if (dp[i]) {
                    break;
                }
            }
        }

        return dp[0];
    }
};