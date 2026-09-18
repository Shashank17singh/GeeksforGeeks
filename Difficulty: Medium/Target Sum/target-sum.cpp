class Solution {
  public:
    int fun(vector<int>&a,int sum){
        int n=a.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        int i,j;
        for(j=0;j<=sum;j++) dp[n][j]=0;
        dp[n][0]=1;
        for(i=n-1;i>=0;i--){
            for(j=0;j<=sum;j++){
                if(a[i]>j) dp[i][j]=dp[i+1][j];
                else dp[i][j]=dp[i+1][j-a[i]]+dp[i+1][j];
            }
        }
        return dp[0][sum];
    }
    int totalWays(vector<int>& arr, int target) {
        //  code here
        int sum=0;
        for(int i=0;i<arr.size();i++) sum+=arr[i];
        if(sum<abs(target)) return 0;
        else if((sum+target)%2==1) return 0;
        else return fun(arr,(sum+target)/2);
    }
};