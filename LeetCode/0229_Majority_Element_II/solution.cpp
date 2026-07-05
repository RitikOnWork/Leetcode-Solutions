class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int n = nums.size();

        // Count frequency
        for (int x : nums) {
            mp[x]++;
        }

        // Check frequency
        for (auto it : mp) {
            if (it.second > n / 3) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};