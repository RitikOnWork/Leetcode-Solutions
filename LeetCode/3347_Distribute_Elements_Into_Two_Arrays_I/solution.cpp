class Solution {
public:
    void call(int i,vector<int>& nums, vector<int>& a1,vector<int> &a2){

        if(i==nums.size()){
            for(int i:a2) a1.push_back(i);
            return;
        }

        if(a1.back()>a2.back()){
            a1.push_back(nums[i]);
        }
        else{
            a2.push_back(nums[i]);
        }
        call(i+1,nums,a1,a2);
    }
    
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a1,a2;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        call(2,nums,a1,a2);
        return a1;
    }
};