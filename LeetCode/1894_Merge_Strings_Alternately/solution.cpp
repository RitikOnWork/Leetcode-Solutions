
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.length();
        int m = word2.length();
        int p1 = 0, p2 = 0;

        int i = 0;
        while (p1 != n && p2 != m) {
            if (i % 2 == 1) {
                ans += word2[p2++];
            } else {
                ans += word1[p1++];
            }
            i++;
        }

        if (p1 != n) {
            ans += word1.substr(p1, n - p1);
        }

        if (p2 != m) {
            ans += word2.substr(p2, m - p2);
        }

        return ans;
    }
};
