class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n+1);
        int i,j;
        for(int i=0;i<=n;i++){
            vector<int>t(W+1);
            dp[i]=t;
        }
        for(j=0;j<=W;j++) dp[n][j]=0;
        for(i=n-1;i>=0;i--){
            for(j=0;j<=W;j++){
                if(j<wt[i]) dp[i][j]=dp[i+1][j];
                else dp[i][j]=max(val[i]+dp[i+1][j-wt[i]],dp[i+1][j]);
            }
        }
        return dp[0][W];
    }
};