class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> cnt;
        for (int x : nums) cnt[x]++;

        int ans = 1;

        if (cnt.count(1)) {
            int c = cnt[1];
            ans = max(ans, (c % 2 == 0) ? c - 1 : c);
        }

        for (auto &[v, f] : cnt) {
            if (v == 1) continue;

            long long cur = v;
            int len = 0;

            while (true) {
                if (!cnt.count(cur)) break;

                if (cnt[cur] >= 2) {
                    len += 2; 
                    if (cur > 1000000000LL) break; 
                    cur = cur * cur;
                } else {
                    len += 1; 
                    break;
                }
            }

            if (!cnt.count(cur))
                len--;

            ans = max(ans, len);
        }

        return ans;
    }
};