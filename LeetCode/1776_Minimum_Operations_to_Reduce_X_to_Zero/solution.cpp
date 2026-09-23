class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int t=0;
        if(x==0) return 0;
        for(int i:nums) t+=i;
        t=t-x;
        int i=0,j=0;
        int cur=0;
        int maxi=-1;
        for(int r=0;r<nums.size();r++){
            cur+=nums[r];
            while(i<=r && cur>t){
                cur-=nums[i];
                i++;
            }
            if(cur==t) maxi=max(maxi,r-i+1);
        }
        if(maxi==-1) return maxi;
        return nums.size()-maxi;
    }
};