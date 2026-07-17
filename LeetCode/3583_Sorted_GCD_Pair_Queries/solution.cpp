class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);
        for (int x : nums) freq[x]++;

        vector<long long> cnt(mx + 1, 0);
        for (int d = 1; d <= mx; d++) {
            for (int j = d; j <= mx; j += d)
                cnt[d] += freq[j];
        }

        vector<long long> exact(mx + 1, 0);
        for (int d = mx; d >= 1; d--) {
            long long pairs = cnt[d] * (cnt[d] - 1) / 2;
            for (int j = d + d; j <= mx; j += d)
                pairs -= exact[j];
            exact[d] = pairs;
        }

        // prefix counts
        vector<long long> pref(mx + 1, 0);
        for (int d = 1; d <= mx; d++)
            pref[d] = pref[d - 1] + exact[d];

        vector<int> ans;
        ans.reserve(queries.size());

        for (long long k : queries) {
            int l = 1, r = mx;
            while (l < r) {
                int mid = (l + r) / 2;
                if (pref[mid] > k)
                    r = mid;
                else
                    l = mid + 1;
            }
            ans.push_back(l);
        }

        return ans;
    }
};