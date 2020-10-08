int equalPartition(int n, int arr[])
{
    // code here
    int sum = accumulate(arr, arr+n, 0);
    if(sum%2)
        return 0;
    sum = sum/2;
    
    bool dp[n+1][sum+1];
    for(int i =0; i<n+1; i++)
        dp[i][0] = true;
    for(int i =1; i<sum+1; i++)
        dp[0][1] = false;
    
    for(int i =1; i<n+1; i++)
    {
        for(int j=1; j<sum+1; j++)
        {
            if(arr[i-1] <= j)
                dp[i][j] = (dp[i-1][j-arr[i-1]] || dp[i-1][j]); 
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    return dp[n][sum];
}