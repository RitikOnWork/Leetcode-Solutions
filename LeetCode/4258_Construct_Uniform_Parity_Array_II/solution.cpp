class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=INT_MAX,even=INT_MAX;
        for(int i:nums1){
            if(i&1) odd=min(odd,i);
            else even=min(even,i);
        }
        if(odd==INT_MAX) return true;
        if(odd<even) return true;
        return false;
    }
};