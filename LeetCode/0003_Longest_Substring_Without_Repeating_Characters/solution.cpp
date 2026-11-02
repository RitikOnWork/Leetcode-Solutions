class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, n = s.length();
        int maxLen = -1;
        if(n == 0) return 0;
        vector<int> hash(256, 0);
        while(l < n && r < n){
            if(hash[s[r]] == 0){
                maxLen = max(maxLen, r - l + 1);
                hash[s[r]]++;
                r++;
            }
            else{ // character already exist
                hash[s[l]]--;
                l++;
            }
        }
        return maxLen;
    }
};