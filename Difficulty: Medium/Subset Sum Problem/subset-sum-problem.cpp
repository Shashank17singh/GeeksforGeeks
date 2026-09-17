class Solution {
  public:
    bool fun(vector<int>&a,int n,int i,int sum,vector<vector<int>>&dp){
        if(i==n){
            if(sum==0) return true;
            return false;
        }
        if(dp[i][sum]!=-1) return dp[i][sum];
        if(a[i]>sum) return dp[i][sum]=fun(a,n,i+1,sum,dp);
        int c1=fun(a,n,i+1,sum-a[i],dp);
        int c2=fun(a,n,i+1,sum,dp);
        return dp[i][sum]=c1||c2;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return fun(arr,n,0,sum,dp);
    }
};