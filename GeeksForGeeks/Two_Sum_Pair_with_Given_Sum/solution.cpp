class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen;
        
        for (int x : arr) {
            int complement = target - x;
            
            if (seen.find(complement) != seen.end()) {
                return true; // pair found
            }
            
            seen.insert(x);
        }
        
        return false; // no pair exists
    }
};