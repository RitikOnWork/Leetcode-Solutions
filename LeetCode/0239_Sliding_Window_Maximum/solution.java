
class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int n = nums.length;
        int[] res = new int[n - k + 1];

        Deque<Integer> dq = new ArrayDeque<Integer>();

        for (int i = 0; i < k; i++) {
            while (dq.size() > 0 && nums[dq.getLast()] < nums[i])
                dq.removeLast();
            dq.addLast(i);
        }

        int s = 0;
        int e = k;

        while (e < n) {
            res[s] = nums[dq.getFirst()];

            if (dq.size() > 0 && s == dq.getFirst())
                dq.removeFirst();

            if (e < n) {
                while (dq.size() > 0 && nums[dq.getLast()] < nums[e])
                    dq.removeLast();

                dq.addLast(e);
            }

            s++;
            e++;
        }

        res[s] = nums[dq.getFirst()];

        return res;
    }
}
