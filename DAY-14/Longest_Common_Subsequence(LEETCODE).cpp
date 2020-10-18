class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.length(), m = text2.length();
        int dp[n+1][m+1];
    
        for(int i =0; i<n+1; i++)
            dp[i][0] = 0;
        for(int i =0; i<m+1; i++)
            dp[0][i] = 0;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m;j++)
            {
                if(text1[i-1] ==  text2[j-1]) 
                    dp[i][j] = 1 + dp[i-1][j-1];
                else 
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);	
            }
        }
        return dp[n][m];    
    }
};