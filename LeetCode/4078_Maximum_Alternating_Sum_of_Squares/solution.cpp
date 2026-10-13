class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(auto& x: nums){
            x*=x;
        }
        ranges::sort(nums); 
        return -accumulate(nums.begin(), nums.begin() + n/2, 0LL)+accumulate(nums.begin() + n / 2, nums.end(), 0LL);
    }
};