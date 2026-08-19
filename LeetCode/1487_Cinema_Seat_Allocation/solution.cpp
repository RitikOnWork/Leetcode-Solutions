class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>> m;
        for(vector<int> i:reservedSeats){
            int x=i[0],y=i[1];
            if(m.find(x)==m.end()){
                m[x]={0,0,0};
            }
            if(y<6 && y>1){
                m[x][0]=1;
            }
            if(y>3 && y<8){
                m[x][1]=1;
            }
            if(y>5 && y<10){
                m[x][2]=1;
            }
        }
        int ans=(n-(m.size()))*2;
        for(auto& i:m){
            int x=i.second[0];
            int y=i.second[1];
            int z=i.second[2];
            if(x && !y && !z){
                ans++;
            }
            if(z && !x && !y){
                ans++;
            }
            if(x && y && !z){
                ans++;
            }
            if(!x && y && z){
                ans++;
            }
            if(x && z && !y){
                ans++;
            }
            if(!x && !y && !z){
                ans+=2;
            }
        }
        return ans;
    }
};
