class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int S) {
        
        int range(0), cz(0); 
        for(auto c: arr)
            if(c == 0)
                cz++;
            else 
                range +=c;
                
        if(S > range)
            return 0;
        
        int reqsum = (S + range);

        if((reqsum % 2) == 1)
            return 0;
        
        reqsum /= 2;
        
        
        int n = arr.size();
        int dp[n+1][reqsum+1];
        for(int i = 0; i<n+1; i++)
           dp[i][0] = 1;
        for(int i = 1; i<reqsum+1; i++)
           dp[0][i] = 0;

        for(int i = 1; i<n+1; i++)
        {
            for(int j = 1; j<reqsum+1; j++)
            {
                if((arr[i-1]  <= j) && (arr[i-1]  != 0))
                    dp[i][j] = dp[i-1][j - arr[i-1]] + dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return pow(2, cz)*dp[n][reqsum];  
    }
};