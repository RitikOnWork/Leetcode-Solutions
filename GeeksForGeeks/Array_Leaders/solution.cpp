class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int maxRight = INT_MIN;
        
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] >= maxRight) {
                ans.push_back(arr[i]);
                maxRight = arr[i];
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};