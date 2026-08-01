class Solution {
public:
    vector<vector<int>> memo;
    int call(vector<int>& nums, int i,int j){
        if(i==j) return nums[i];
        if(memo[i][j]!=-1) return memo[i][j]; 
        int v1=nums[i]-call(nums,i+1,j);
        int v2=nums[j]-call(nums,i,j-1);
        memo[i][j]=max(v1,v2);
        return max(v1,v2);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        memo.resize(n,vector<int>(n,-1));
        int ans=call(nums,0,nums.size()-1);
        if(ans>=0) return true;
        return false;

    }
};