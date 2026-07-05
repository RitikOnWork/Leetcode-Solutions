class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();
        const int MOD = 1000000007;

        vector<vector<int>> dp(n, vector<int>(n, -1));
        vector<vector<int>> ways(n, vector<int>(n, 0));

        dp[n - 1][n - 1] = 0;
        ways[n - 1][n - 1] = 1;

        int dx[3] = {-1, 0, -1};
        int dy[3] = {0, -1, -1};

        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (dp[i][j] == -1) continue;

                for (int k = 0; k < 3; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (ni < 0 || nj < 0) continue;
                    if (board[ni][nj] == 'X') continue;

                    int add = 0;
                    if (board[ni][nj] >= '1' && board[ni][nj] <= '9')
                        add = board[ni][nj] - '0';

                    int val = dp[i][j] + add;

                    if (val > dp[ni][nj]) {
                        dp[ni][nj] = val;
                        ways[ni][nj] = ways[i][j];
                    } else if (val == dp[ni][nj]) {
                        ways[ni][nj] = (ways[ni][nj] + ways[i][j]) % MOD;
                    }
                }
            }
        }

        if (ways[0][0] == 0) return {0, 0};
        return {dp[0][0], ways[0][0]};
    }
};