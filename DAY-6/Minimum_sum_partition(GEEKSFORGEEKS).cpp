#include <bits/stdc++.h>
using namespace std;

class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    
	    int sum = accumulate(arr, arr+n, 0);
	    
	    bool dp[n+1][sum+1];
	    for(int i = 0; i <n+1; i++)
	        dp[i][0] = true;
	    for(int i = 0; i <sum+1; i++)
	        dp[0][i] = false;
	    for(int i = 1; i<n+1; i++)
	        for(int j=1; j<sum+1; j++)
	        {
	            if(arr[i-1] <= j)
	               dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
	           else
	               dp[i][j] = dp[i-1][j];
	        }
	   int minans = INT_MAX;
	   for(int i = 0; i < sum+1; i++)
	    if(dp[n][i] == true)
        {
            minans = min(minans, abs(i - (sum-i)));
        }
	   return minans; 
	} 
};

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDiffernce(a, n) << "\n";
	     
    }
    return 0;
