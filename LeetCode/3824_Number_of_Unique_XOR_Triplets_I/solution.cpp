class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return n;

        int ans = 1;
        while (ans <= n) ans <<= 1;   // smallest power of two > n
        return ans;
    }
};
