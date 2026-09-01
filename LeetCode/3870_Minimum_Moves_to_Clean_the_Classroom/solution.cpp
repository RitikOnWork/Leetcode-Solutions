class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size();
        int n = classroom[0].size();

        int sr = -1, sc = -1;
        vector<pair<int, int>> litter;

        // Locate start and litter.
        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (classroom[r][c] == 'S') {
                    sr = r;
                    sc = c;
                } else if (classroom[r][c] == 'L') {
                    litter.push_back({r, c});
                }
            }
        }

        int k = litter.size();

        // No litter to collect.
        if (k == 0) return 0;

        // Map each litter position to a bit.
        vector<vector<int>> litterId(m, vector<int>(n, -1));
        for (int i = 0; i < k; ++i) {
            litterId[litter[i].first][litter[i].second] = i;
        }

        int fullMask = (1 << k) - 1;

        int masks = 1 << k;
        vector<int> best(m * n * masks, -1);

        auto id = [&](int r, int c, int mask) {
            return ((r * n + c) * masks + mask);
        };

        struct State {
            int r, c;
            int mask;
            int energy;
            int dist;
        };

        queue<State> q;

        best[id(sr, sc, 0)] = energy;
        q.push({sr, sc, 0, energy, 0});

        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto cur = q.front();
            q.pop();

            int r = cur.r;
            int c = cur.c;
            int mask = cur.mask;
            int e = cur.energy;
            int dist = cur.dist;

            if (mask == fullMask)
                return dist;

            // If energy is 0, no move is possible unless we are on R.
            if (e == 0)
                continue;

            for (int d = 0; d < 4; ++d) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                    continue;

                if (classroom[nr][nc] == 'X')
                    continue;

                int ne = e - 1;
                int nmask = mask;

                // Collect litter.
                if (litterId[nr][nc] != -1) {
                    nmask |= (1 << litterId[nr][nc]);
                }

                // Reset energy after entering an R cell.
                if (classroom[nr][nc] == 'R') {
                    ne = energy;
                }

                int idx = id(nr, nc, nmask);

                if (best[idx] >= ne)
                    continue;

                best[idx] = ne;
                q.push({nr, nc, nmask, ne, dist + 1});
            }
        }

        return -1;
    }
};
