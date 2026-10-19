class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int n = nums.length;
        int[] res = new int[n - k + 1];

        Deque<Integer> dq = new ArrayDeque<>();

        for (int i = 0; i < n; i++) {

            // Remove indices outside the current window
            while (!dq.isEmpty() && dq.peekFirst() <= i - k) {
                dq.pollFirst();
            }

            // Remove indices whose values are smaller
            while (!dq.isEmpty() && nums[dq.peekLast()] <= nums[i]) {
                dq.pollLast();
            }

            // Add the current index
            dq.offerLast(i);

            // Record the maximum once the first window is complete
            if (i >= k - 1) {
                res[i - k + 1] = nums[dq.peekFirst()];
            }
        }

        return res;
    }
}
