class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        sort(s.begin(), s.end());

        int n = s.size();

        for (int i = n - 1; i >= 0; --i) {
            
            string prefix = target.substr(0, i);

            // Check whether target's prefix can be formed from s.
            array<int, 26> cnt{};
            for (char c : s) cnt[c - 'a']++;

            bool possible = true;
            for (char c : prefix) {
                if (--cnt[c - 'a'] < 0) {
                    possible = false;
                    break;
                }
            }

            if (!possible) continue;


            int chosen = -1;
            for (int c = target[i] - 'a' + 1; c < 26; ++c) {
                if (cnt[c] > 0) {
                    chosen = c;
                    break;
                }
            }

            if (chosen == -1) continue;

            string ans = prefix;
            ans += char('a' + chosen);

            cnt[chosen]--;

            for (int c = 0; c < 26; ++c) {
                ans.append(cnt[c], char('a' + c));
            }

            return ans;
        }

        return "";
    }
};
