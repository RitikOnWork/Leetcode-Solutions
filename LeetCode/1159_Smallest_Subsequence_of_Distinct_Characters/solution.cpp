class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(256, -1);
        for (int i = 0; i < s.size(); i++)
            last[s[i]] = i;

        vector<bool> used(256, false);
        string ans;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (used[c]) continue;

            while (!ans.empty() &&
                   ans.back() > c &&
                   last[ans.back()] > i) {
                used[ans.back()] = false;
                ans.pop_back();
            }

            ans.push_back(c);
            used[c] = true;
        }

        return ans;
    }
};