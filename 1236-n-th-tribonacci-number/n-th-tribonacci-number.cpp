class Solution {
public:
    int solve(int n,vector<int>& dp){
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        if(dp[n]!=-1) return dp[n];

        dp[n]=solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);

        return dp[n];
    }
    int tribonacci(int n) {
        // vector<int>arr(38,0);
        // if(n==0) return 0;
        // if(n==1 || n==2) return 1;
        // int prev3=0;
        // int prev2=1;
        // int prev1=1;
        // for(int i=3;i<=n;i++){
        //     int ans=prev1+prev2+prev3;
        //     prev3=prev2;
        //     prev2=prev1;
        //     prev1=ans;
        // }
        // return prev1;
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};