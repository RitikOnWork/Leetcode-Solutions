class Solution {
public:
    int maxVowels(string s, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                sum++;
            }
        }
        int maxi=sum;
        for(int i=1;i<=s.size()-k;i++){
            if(s[k+i-1]=='a' || s[k+i-1]=='e' || s[k+i-1]=='i' || s[k+i-1]=='o' || s[k+i-1]=='u'){
                sum++;
            }
            if(s[i-1]=='a' || s[i-1]=='e' || s[i-1]=='i' || s[i-1]=='o' || s[i-1]=='u'){
                sum--;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};