class Solution {
public:
    int minInsertions(string s1) {
        string s2(s1);
        reverse(s2.begin(), s2.end());
        int n = s1.length();
        int dp[n+1][n+1];
        for(int i=0; i<n+1; i++)
            dp[i][0] = 0;
        for(int i=0; i<n+1; i++)
            dp[0][i] = 0;
        for(int i = 1; i<n+1; i++)
            for(int j=1; j<n+1;j++)
            {
                if(s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else 
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        return n - dp[n][n];
    }
};