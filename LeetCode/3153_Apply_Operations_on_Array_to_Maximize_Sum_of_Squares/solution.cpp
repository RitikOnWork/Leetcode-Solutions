class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const int m=1e9+7; 
        vector<int> cnt(30,0);
        for(int n:nums){
            for(int i=0;i<30;i++){
                if(n & (1<<i)) cnt[i]++;
            }
        }
        long long res=0;
        for(int i=0;i<k;i++){
            long long cur=0;
            for(int j=29;j>=0;j--){
                if(cnt[j]>0){
                    cur|=(1LL<<j);
                    cnt[j]--;
                }
            }
            res=(res+ (cur*cur)  )%m;
        }
        return (int) res;
    }
};