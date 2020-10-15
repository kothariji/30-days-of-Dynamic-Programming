class Solution {
public:
    int change(int amount, vector<int>& S) {
         if(amount == 0)
            return 1;
        int m =S.size();
        int n = amount;
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
            dp[i][0]=1;
    
        for(int i=1;i<=n;i++)
            dp[0][i]=0;
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(S[i-1]<=j)
                {
                    dp[i][j]= dp[i][j-S[i-1]] + dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        if(dp[m][n] == 0)
            return 0;
        return dp[m][n];
    }
    
};