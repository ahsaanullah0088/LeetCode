class Solution {
public:
   int solve(int n,vector<int>&dp)
   {
     if(n==2)
     return 1;
     if(dp[n]!=-1)
     return dp[n];
     int a=INT_MIN;
     for(int i=1;i<n;i++)
     {
       a=max(a,i*max((n-i),solve(n-i,dp)));
       
     }
    return dp[n]=a;

   }
    int integerBreak(int n) {
      vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};