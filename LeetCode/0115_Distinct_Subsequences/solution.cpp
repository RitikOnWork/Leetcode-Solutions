class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size();
        int n = t.size();

        if (n > m) return 0;

        const int LIMIT = INT_MAX;

        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (int i = 1; i <= m; i++) {
            for (int j = min(i, n); j >= 1; j--) {
                if (s[i - 1] == t[j - 1]) {
                    if (dp[j] > LIMIT - dp[j - 1])
                        dp[j] = LIMIT;
                    else
                        dp[j] += dp[j - 1];
                }
            }
        }

        return dp[n];
    }
};
