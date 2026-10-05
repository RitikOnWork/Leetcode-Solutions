class Solution {
public: 
    vector<vector<int>> memo;
    bool call(string s,int i,int cnt){
        if(i==s.size()){
            if(cnt==0){
                memo[i][cnt]=0;
                return true;
            }
            return false;
        }
        if(cnt<0){
            return false;
        }
        if(memo[i][cnt]!=-1){
            if(memo[i][cnt]==0) return false;
            return true;
        }
        if(s[i]=='*'){
            bool x=call(s,i+1,cnt-1);
            bool y=call(s,i+1,cnt+1);
            bool z=call(s,i+1,cnt);
            if(x || y || z){
                memo[i][cnt]=1;
                return true;
            }
            else{
                memo[i][cnt]=0;
                return false;
            }
        }
        else if(s[i]=='('){
            bool x=call(s,i+1,cnt+1);
            if(x){
                memo[i][cnt]=1;
                return true;
            }
            else{
                memo[i][cnt]=0;
                return false;
            }
        }
        else{
            bool x=call(s,i+1,cnt-1);
            if(x){
                memo[i][cnt]=1;
                return true;
            }
            else{
                memo[i][cnt]=0;
                return false;
            }
        }
    }
    bool checkValidString(string s) {
        int n=s.size();
        memo.resize(n+1,vector<int>(n,-1));
        bool ans=call(s,0,0);
        return ans;
    }
};