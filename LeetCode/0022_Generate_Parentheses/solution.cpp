class Solution {
    void helper(string s, int n, int oc, int cc, vector<string>& ans) {
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (oc < n) {
            helper(s + '(', n, oc + 1, cc, ans);
        }

        if (cc < oc && cc < n) {
            helper(s + ')', n, oc, cc + 1, ans);
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        helper("", n, 0, 0, result);
        return result;
    }
};
