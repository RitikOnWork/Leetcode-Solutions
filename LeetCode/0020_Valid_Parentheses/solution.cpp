class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char,char> m;
        m[')']='(';
        m['}']='{';
        m[']']='[';
        for(char c:s){
            if(m.find(c)!=m.end()){
                if(stk.empty()) return false;
                if(stk.top()==m[c]) stk.pop();
                else return false;
            }
            else{
                stk.push(c);
            }
        }
        return stk.empty();
    }
};