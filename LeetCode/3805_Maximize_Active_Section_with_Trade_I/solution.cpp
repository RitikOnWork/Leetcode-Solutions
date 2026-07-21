class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        string t = "1" + s + "1";
        int base = 0;
        for (char c : s) if (c == '1') base++;

        vector<pair<char,int>> runs;
        for (char c : t) {
            if (runs.empty() || runs.back().first != c)
                runs.push_back({c, 1});
            else
                runs.back().second++;
        }

        int ans = base;

        for (int i = 1; i + 1 < (int)runs.size(); i++) {
            if (runs[i].first == '1' &&
                runs[i - 1].first == '0' &&
                runs[i + 1].first == '0') {

                int gain = runs[i - 1].second + runs[i + 1].second;
                ans = max(ans, base + gain);
            }
        }

        return ans;
    }
};