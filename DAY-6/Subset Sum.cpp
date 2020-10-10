#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;


int minSumDiffernce(int arr[], int n) 
{ 
    
    int sum = accumulate(arr, arr+n, 0);
    
    //declaring dp
    bool dp[n+1][sum+1];
    
    //initialisation step
    for(int i = 0; i <n+1; i++)
        dp[i][0] = true;
    for(int i = 0; i <sum+1; i++)
        dp[0][i] = false;

    //iterative function
    for(int i = 1; i<n+1; i++)
        for(int j=1; j<sum+1; j++){
            if(arr[i-1] <= j)
               dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
           else
               dp[i][j] = dp[i-1][j];
        }

   int minans = INT_MAX;

   //finding the minimum difference
   for(int i = 0; i < sum+1; i++)
    if(dp[n][i] == true){
        minans = min(minans, abs(i - (sum-i)));
    }
   return minans; 
} 

int main()
{
	int arr[5] = {2, 3, 7,8,11};
	cout<<minSumDiffernce(arr, 5)<<endl;

	return 0;	
}