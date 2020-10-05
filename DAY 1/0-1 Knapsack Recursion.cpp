#include<bits/stdc++.h>
using namespace std;

int knapsack(vector <int> weight, vector <int> value, int maxweight, int index)
{
	//base condition
	if( (index < 0) || (maxweight <= 0) )
		return 0;

	if(weight[index] <= maxweight)
		return max(value[index] + knapsack(weight, value, maxweight - weight[index], index-1), knapsack(weight, value, maxweight, index-1));

	else
		return knapsack(weight, value, maxweight, index-1);
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

	int maxweight(0);

	cout<<"Enter maximum capacity of knapsack: ";
	cin>>maxweight;

	cout<<"Maximum value of bag is: "<<knapsack(weight, value, maxweight, n-1);
}



// # Dynamic Programming

// ##### Definition :
// ```
// Simply cached Recusrion (Memoization) or in other words enhanced recursion.
// ```
// ##### _The main idea behind DP is to store the results of subproblems so that we can simply use results of these subproblems without re-computing them when needed in future. This idealogy saves a lot of time and make the solution optimized._
// ---
// ### Day - 1
// #### Knapsack Problem:
// _In this problem we are given an empty bag with its maximum weight holding capacity. Also we are given a list of items with there weight and profit values. We need to find out the maximum profit we can earn._
// #### Type of Knapsack Problems
// - ***Fractional Knapsack*** - It is simply a greedy problem. In this we can take fraction values. ***for eg. if we have space of 3 kg. left in a knapsack and we have an item of 6 kg that values 50 rs. , then we can take 50% of that item and we will gain profit of 25 rs.***

// - ***0/1 Knapsack*** - It is a classical dp problem. Many biginner level problems are variation of this problem. In this we have only have two choices, either we include the item in Knapsack or we don't.

// - ***Unbounded Knapsack*** - It is similar to 0/1 Knapsack but in this we can include same item multiple number of times.
