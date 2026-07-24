class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> pairXor;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                pairXor.insert(nums[i] ^ nums[j]);
            }
        }

        unordered_set<int> ans;

        for (int x : nums)
            ans.insert(x);
\
        for (int x : pairXor) {
            for (int y : nums) {
                ans.insert(x ^ y);
            }
        }

        return ans.size();
    }
};