class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {
        long long sum = 0, maxSum = -1;
        int start = 0;

        vector<int> ans;

        for (int i = 0; i <= arr.size(); i++) {

            if (i == arr.size() || arr[i] < 0) {

                if (sum > maxSum ||
                   (sum == maxSum && (i - start) > ans.size())) {

                    maxSum = sum;
                    ans.clear();

                    for (int j = start; j < i; j++)
                        ans.push_back(arr[j]);
                }

                sum = 0;
                start = i + 1;
            }
            else {
                sum += arr[i];
            }
        }

        if (ans.empty())
            return {-1};

        return ans;
    }
};