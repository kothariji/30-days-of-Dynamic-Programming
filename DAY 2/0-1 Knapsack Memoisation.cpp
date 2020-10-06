#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

vector < vector<int> > dp(MAX, vector<int> (MAX, -1));

int knapsack(vector <int> weight, vector <int> value, int maxweight, int index)
{
	//base condition
	if( (index < 0) || (maxweight <= 0) )
		return 0;
	if(dp[index][maxweight] == -1)
	{
		if(weight[index] <= maxweight)
			dp[index][maxweight] =  max(value[index] + knapsack(weight, values, maxweight - weight[index], index-1), knapsack(weight, values, maxweight, index-1));
		
		else
			dp[index][maxweight] = knapsack(weight, values, maxweight, index-1);
	}
	return dp[index][maxweight];
}



int main()
{
	int n;
	cout<<"Enter the number of items: ";
	cin>>n;
	vector <int> weight(n), value(n);

	cout<<"enter weights: "<<endl;
	for(int  i=0; i<n; i++)
		cin>>weight[i];
	cout<<"enter values: "<<endl;
	for(int  i=0; i<n; i++)
		cin>>value[i];

	
	int maxweight;

	cout<<"Enter maximum capacity of knapsack: ";
	cin>>maxweight;

	cout<<knapsack(weight, values, maxweight, n-1);
}




---
## Day - 2
#### Memosisation (Top - Down Approach)
_It is basically an **optimization technique** used to cache the results of subproblems so that we can use that results later on if required. **Memoization** ensures that a method doesn't run for the inputs whose results are previously calculated._

The dimensions of the memoisation array/table deepends upon variables.
If in recursive function:

- 1 variable is changing on recursive call, we will create a linear vector/array. ***E.g.  Fibonacci series***
- 2 variables are changing on recursive call, then we will use 2-D matrix to store results of sumproblems. ***E.g. Longest Common Subsequence***
- and so on.....for 3, 4..n variables.

#### _Generally we should initialise these matrices with -1 and later on we can check that if value of a particular cell is not  -1 then we will directly return that particular  cell value. else we will do a recursive call and set the cell value and finally return the cell value._


#### Type of Knapsack Problems
- ***Fractional Knapsack*** - It is simply a greedy problem. In this we can take fraction values. ***for eg. if we have space of 3 kg. left in a knapsack and we have an item of 6 kg that values 50 rs. , then we can take 50% of that item and we will gain profit of 25 rs.***

- ***0/1 Knapsack*** - It is a classical dp problem. Many biginner level problems are variation of this problem. In this we have only have two choices, either we include the item in Knapsack or we don't.

- ***Unbounded Knapsack*** - It is similar to 0/1 Knapsack but in this we can include same item multiple number of times.


```diff
! solved a classical knapsack problem using only recursion.
```
---