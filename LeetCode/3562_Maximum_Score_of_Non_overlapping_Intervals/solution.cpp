class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& a) {
        int n=a.size();
        vector<array<int,4>> v(n);
        for(int i=0;i<n;i++) v[i]={a[i][0],a[i][1],a[i][2],i};
        
        sort(v.begin(),v.end(),[](auto&x,auto&y){return x[1]<y[1];});

        pair<long long,vector<int>> dp[50001][5];

        for(int i=1;i<=n;i++) {
            for(int k=1;k<=4;k++) {
                dp[i][k]=dp[i-1][k];

                int j=lower_bound(v.begin(),v.begin()+i-1,v[i-1][0],
                    [](auto&x,int l){return x[1]<l;})-v.begin();

                auto cur=dp[j][k-1];
                cur.first+=v[i-1][2];
                cur.second.push_back(v[i-1][3]);
                sort(cur.second.begin(),cur.second.end());

                if(cur.first>dp[i][k].first ||
                  (cur.first==dp[i][k].first && cur.second<dp[i][k].second))
                    dp[i][k]=cur;
            }
        }
        return dp[n][4].second;
    }
};