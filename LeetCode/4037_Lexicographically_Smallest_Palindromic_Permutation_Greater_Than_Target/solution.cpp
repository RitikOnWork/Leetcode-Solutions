class Solution {
public:
    string lexPalindromicPermutation(string s, string target) {
        int n = s.length();
        int m = n / 2;
        
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        
        int odd_count = 0;
        char mid_char = '\0';
        for (int i = 0; i < 26; ++i) {
            if (count[i] % 2 != 0) {
                odd_count++;
                mid_char = 'a' + i;
            }
        }

        if (odd_count > 1) return "";
      
        vector<int> half_count(26, 0);
        for (int i = 0; i < 26; ++i) {
            half_count[i] = count[i] / 2;
        }
        
        auto build_palindrome = [&](const string& first_half) -> string {
            string res = first_half;
            if (n % 2 != 0) {
                res += mid_char;
            }
            string second_half = first_half;
            reverse(second_half.begin(), second_half.end());
            res += second_half;
            return res;
        };

        bool can_match_target_prefix = true;
        vector<int> rem = half_count;
        for (int j = 0; j < m; ++j) {
            int c = target[j] - 'a';
            if (rem[c] > 0) {
                rem[c]--;
            } else {
                can_match_target_prefix = false;
                break;
            }
        }
        
        if (can_match_target_prefix) {
            string cand = build_palindrome(target.substr(0, m));
            if (cand > target) {
                return cand;
            }
        }
      
        for (int i = m - 1; i >= 0; --i) {

            vector<int> current_rem = half_count;
            bool valid_prefix = true;
            for (int j = 0; j < i; ++j) {
                int c = target[j] - 'a';
                if (current_rem[c] > 0) {
                    current_rem[c]--;
                } else {
                    valid_prefix = false;
                    break;
                }
            }
            
            if (!valid_prefix) continue;

            for (int c = (target[i] - 'a') + 1; c < 26; ++c) {
                if (current_rem[c] > 0) {
                    string first_half = target.substr(0, i);
                    first_half += (char)('a' + c);
                    current_rem[c]--;

                    for (int k = 0; k < 26; ++k) {
                        while (current_rem[k] > 0) {
                            first_half += (char)('a' + k);
                            current_rem[k]--;
                        }
                    }
                    
                    return build_palindrome(first_half);
                }
            }
        }
        
        return "";
    }
};