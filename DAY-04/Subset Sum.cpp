#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

/************* Bottom Up Approach********************/
int subset(int arr[],  int n, int sum)
{
    // code here
    
    bool dp[n+1][sum+1];
    for(int i =0; i<n+1; i++)
        dp[i][0] = true;
    for(int i =1; i<sum+1; i++)
        dp[0][i] = false;
    
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

/************** Recursive Code***********************/
bool subset(int arr[],  int n, int sum)
{
	if(sum == 0)
		return true;
	if(n < 0)
		return false;
	if(arr[n] <= sum)
		return ( subset(arr, n-1, sum - arr[n]) || subset(arr, n-1, sum ));
	return subset(arr, n-1, sum );
}


int main()
{
	int arr[5] = {2, 3, 7,8,10};
	for(int i = 1; i<= 15; i++)
	cout<<i<<"  "<<subset(arr, 5, i)<<endl;

	return 0;	
}