class Solution {
      void helper(string s, int total_pairs, int oc, int cc, vector<string>& ans) {
          if (s.length() == 2 * total_pairs) {
              ans.push_back(s);
              return;
        }

          if (oc < total_pairs) {
              helper(s + '(', total_pairs, oc + 1, cc, ans);
        }

          if (cc < oc) {
              helper(s + ')', total_pairs, oc, cc + 1, ans);
        }
    }

  public:
      vector<string> generateParentheses(int n) {
          vector<string> result;
          int total_pairs = n / 2; 

          helper("", total_pairs, 0, 0, result);
          return result;
    }
};
