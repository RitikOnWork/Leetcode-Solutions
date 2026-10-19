
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n - k + 1);

        deque<int> dq;

        for (int i = 0; i < k; i++) {
            while (dq.size() > 0 && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);
        }

        int s = 0;
        int e = k;

        while (e < n) {
            res[s] = nums[dq.front()];

            if (dq.size() > 0 && s == dq.front())
                dq.pop_front();

            if (e < n) {
                while (dq.size() > 0 && nums[dq.back()] < nums[e])
                    dq.pop_back();

                dq.push_back(e);
            }

            s++;
            e++;
        }

        res[s] = nums[dq.front()];

        return res;
    }
};