class Solution {
public:
    std::string reverseVowels(std::string s) {
        int i = 0;
        int j = s.length() - 1;
        string_view vowels = "aeiouAEIOU";
        
        while (i < j) {
            while (i < j && vowels.find_first_of(s[i]) == std::string_view::npos) {
                i++;
            }

            while (i < j && vowels.find_first_of(s[j]) == std::string_view::npos) {
                j--;
            }

            if (i < j) {
                std::swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};