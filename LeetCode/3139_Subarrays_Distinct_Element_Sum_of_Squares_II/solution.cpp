class Solution {
public:
    static const int MOD = 1e9 + 7;

    struct Node {
        long long sum, sqSum, lazy;
    };

    int n;
    vector<Node> tree;

    void apply(int node, int l, int r, long long val) {
        long long len = r - l + 1;
        long long v = val % MOD;

        tree[node].sqSum = (tree[node].sqSum
            + 2 * v % MOD * tree[node].sum % MOD
            + len % MOD * v % MOD * v % MOD) % MOD;

        tree[node].sum = (tree[node].sum + len * v) % MOD;
        tree[node].lazy = (tree[node].lazy + v) % MOD;
    }

    void push(int node, int l, int r) {
        if (tree[node].lazy == 0 || l == r) return;

        int mid = (l + r) / 2;
        long long v = tree[node].lazy;

        apply(node * 2, l, mid, v);
        apply(node * 2 + 1, mid + 1, r, v);

        tree[node].lazy = 0;
    }

    void update(int node, int l, int r, int ql, int qr,
                long long val) {
        if (ql > r || qr < l) return;

        if (ql <= l && r <= qr) {
            apply(node, l, r, val);
            return;
        }

        push(node, l, r);
        int mid = (l + r) / 2;

        update(node * 2, l, mid, ql, qr, val);
        update(node * 2 + 1, mid + 1, r, ql, qr, val);

        tree[node].sum =
            (tree[node * 2].sum + tree[node * 2 + 1].sum) % MOD;

        tree[node].sqSum =
            (tree[node * 2].sqSum + tree[node * 2 + 1].sqSum) % MOD;
    }

    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.assign(4 * n + 5, {0, 0, 0});

        unordered_map<int, int> last;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int left = 0;
            if (last.count(nums[i])) {
                left = last[nums[i]] + 1;
            }

            update(1, 0, n - 1, left, i, 1);
            last[nums[i]] = i;

            ans = (ans + tree[1].sqSum) % MOD;
        }

        return ans;
    }
};