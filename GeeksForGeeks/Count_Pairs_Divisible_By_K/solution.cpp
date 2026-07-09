class Solution {
public:
    int countKdivPairs(vector<int>& arr, int k) {
        vector<int> freq(k, 0);
        int count = 0;

        for (int x : arr) {
            int rem = x % k;
            if (rem < 0) rem += k;   // Handles negative numbers if present

            int need = (k - rem) % k;
            count += freq[need];

            freq[rem]++;
        }

        return count;
    }
};