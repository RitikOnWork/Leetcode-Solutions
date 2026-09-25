class Solution {
public:
    string exp;
    int idx;

    set<string> item() {
        set<string> ret;

        if (exp[idx] == '{') {
            idx++;
            ret = expr();
        } else {
            ret = {string(1, exp[idx])};
        }

        idx++;
        return move(ret);
    }
    set<string> term() {
        set<string> ret = {""};
        while (idx < exp.size() && (exp[idx] == '{' || isalpha(exp[idx]))) {
            auto sub = item();
            set<string> tmp;
            for (auto& left : ret) {
                for (auto& right : sub) {
                    tmp.insert(left + right);
                }
            }

            ret = move(tmp);
        }

        return move(ret);
    }

    set<string> expr() {
        set<string> ret;

        while (true) {
            ret.merge(term());

            if (idx < exp.size() && exp[idx] == ',') {
                idx++;
                continue;
            } else {
                break;
            }
        }

        return move(ret);
    }

    vector<string> braceExpansionII(string expression) {
        this->exp = expression;
        this->idx = 0;

        auto ret = expr();

        return {ret.begin(), ret.end()};
    }
};