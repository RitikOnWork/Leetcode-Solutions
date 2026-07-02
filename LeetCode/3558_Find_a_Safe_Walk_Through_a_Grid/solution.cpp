class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, -1));
        queue<pair<pair<int,int>, int>> q;

        int h = health;
        if (grid[0][0] == 1) h--;

        if (h <= 0) return false;

        q.push({{0, 0}, h});
        vis[0][0] = h;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!q.empty()) {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int cur = q.front().second;
            q.pop();

            if (x == m - 1 && y == n - 1)
                return true;

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                    int nh = cur;

                    if (grid[nx][ny] == 1)
                        nh--;

                    if (nh > 0 && nh > vis[nx][ny]) {
                        vis[nx][ny] = nh;
                        q.push({{nx, ny}, nh});
                    }
                }
            }
        }

        return false;
    }
};