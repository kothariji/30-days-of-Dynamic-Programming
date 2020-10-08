class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum%2)
            return false;
        sum /= 2;
        int n =nums.size();
        bool dp[n+1][sum+1];
        
        for(int i =0; i<n+1; i++)
            dp[i][0] = true;
        for(int i =1; i<sum+1; i++)
            dp[0][i] = false;
        
        for(int i =1; i<n+1; i++)
        {
            for(int j = 1; j< sum+1; j++)
            {
                if(nums[i-1] <= j)
                    dp[i][j] = ((dp[i-1][j-nums[i-1]]) || dp[i-1][j]);
                else 
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};