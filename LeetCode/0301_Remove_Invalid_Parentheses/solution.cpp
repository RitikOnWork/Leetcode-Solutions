class Solution {
public:
    bool ok(string s) {
        int b = 0;
        for (char c : s) {
            if (c == '(') b++;
            else if (c == ')' && --b < 0) return false;
        }
        return b == 0;
    }

    vector<string> removeInvalidParentheses(string s) {
        vector<string> a;
        queue<string> q;
        unordered_set<string> v;

        q.push(s);
        v.insert(s);

        bool f = false;

        while (!q.empty() && !f) {
            int n = q.size();

            while (n--) {
                string t = q.front();
                q.pop();

                if (ok(t)) {
                    a.push_back(t);
                    f = true;
                    continue;
                }

                for (int i = 0; i < t.size(); i++) {
                    if (t[i] != '(' && t[i] != ')') continue;

                    string u = t.substr(0, i) + t.substr(i + 1);

                    if (!v.count(u)) {
                        v.insert(u);
                        q.push(u);
                    }
                }
            }
        }

        return a;
    }
};