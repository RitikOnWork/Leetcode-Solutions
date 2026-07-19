class Solution {
public:
    int helper(int n) {
        if (n <= 1)
            return n;

        int last = helper(n - 1);
        int slast = helper(n - 2);

        return last + slast;
    }

    int fib(int n) {
        return helper(n);
    }
};