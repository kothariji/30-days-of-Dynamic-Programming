#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 1000005
#define MOD 1000000007
using namespace std;

int MCM(int arr[], int n, int i, int j)
{
	if(i >= j)
		return 0;
	int mini = INT_MAX;
	for(int k = i; k < j; k++)
	{
		mini = min(mini, MCM(arr,n,i,k) + MCM(arr,n,k+1,j) + (arr[i-1]*arr[k]*arr[j]));
	}
	return mini;
}

int main()
{
	int arr[5] = {40, 20, 30, 10, 30}; 
	cout<<MCM(arr,5,1,4);
	return 0;
}