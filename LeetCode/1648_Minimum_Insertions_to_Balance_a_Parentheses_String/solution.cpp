class Solution {
public:
    int minInsertions(string s) {
        int ins=0,lcnt=0,l=s.size(),i=0;
        while(i<l){
            char c=s[i];
            if(c=='('){
                lcnt++;
                i++;
            }
            else{
                if(lcnt>0) lcnt--;
                else ins++;
                if(i<l-1 && s[i+1]==')') i+=2;
                else{
                    ins++;
                    i++;
                }
            }
        }
        ins+=lcnt*2;
        return ins;
    }
};
