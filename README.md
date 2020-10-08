
# 21-DAYS-PROGRAMMING-CHALLENGE-ACES
### CP is OP :heart:  Saying hi to DP! :fire::fire:
---
<br/>

# Dynamic Programming :rocket::rocket:

### Definition : :orange_book:
```
Simply cached Recursion (Memoization) or in other words enhanced recursion.
```
##### _The main idea behind DP is to store the results of subproblems so that we can simply use the results of these subproblems without re-computing them when needed in the future. This idealogy saves a lot of time and makes the solution optimized._
---
## Day - 1 :blue_book:
### Knapsack Problem: :pushpin::pushpin:
_In this problem we are given an empty bag with its maximum weight holding capacity. Also, we are given a list of items with there weight and profit values. We need to find out the maximum profit we can earn._
#### Type of Knapsack Problems
- ***Fractional Knapsack*** - It is simply a greedy problem. In this, we can take fraction values. ***for eg. if we have space of 3 kg. left in a knapsack and we have an item of 6 kg that values 50 rs. , then we can take 50% of that item and we will gain a profit of 25 rs.***

- ***0/1 Knapsack*** - It is a classical DP problem. Many beginner-level problems are a variation of this problem. In this, we have only had two choices, either we include the item in Knapsack or we don't.

- ***Unbounded Knapsack*** - It is similar to 0/1 Knapsack but in this, we can include the same item multiple numbers of times.


```diff
! solved a classical knapsack problem using only recursion.
```
#### It all started with Day-1 :fire::fire:
---

## Day - 2 :green_book:
### Memosisation: Top - Down Approach :pushpin::pushpin:
_It is an **optimization technique** used to cache the results of subproblems so that we can use that results later on if required. **Memoization** ensures that a method doesn't run for the inputs whose results are previously calculated._

The dimensions of the memoization array/table depend upon variables.
If in recursive function:

- 1 variable is changing on recursive call, we will create a linear vector/array. ***E.g.  Fibonacci series***
- 2 variables are changing on recursive call, then we will use a 2-D matrix to store the results of subproblems. ***E.g. Longest Common Subsequence***
- and so on.....for 3, 4..n variables.

#### _Generally we should initialize these matrices with -1 and later on we can check that if the value of a particular cell is not  -1 then we will directly return that particular cell value. else we will do a recursive call and set the cell value and finally return the cell value._

```diff
+ solved a classical knapsack problem using the memoization technique.
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[0 - 1 Knapsack Problem](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0) | [View Solution](./DAY-2/0-1_Knapsack_Problem_(GEEKSFORGEEKS).cpp) | Easy |||
<pre>
<b>Important Tip</b> -  std::vector's at() function is similar to subscript operator [ ].
But when the performance is measured at() function is 3.1 times faster then subscript operator [ ]. 
</pre>
<b> This costed me 29 submissions :persevere: :laughing:</b>


---
## Day - 3 :ledger:
### 1.  Tabulation:  Bottom-Up Approach :pushpin::pushpin:
_It is one of the most preferable methods in dynamic programming. It is faster than the **memoization** method as it doesn't involve any recursive calls. In this method, we have an array/matrix and we start from the first cell and move down filling entries in each cell one by one._
#### 2-Steps to create dp matrix. 
- ***Step-1 Initialisation*** - It is similar to the base condition which we do in a recursive function. ***for eg.***
 ```
 //in recursive function
	 if((index <0)|| (w <= 0))
			return 0;

//in bottom-up approach
	for(int i =0; i<=n; i++){
			for(int j= 0; j<=w; j++){
				if(i == 0 || j ==0)
					dp[i][j] = 0;
				}
			}
 ```

- ***Step-2 Iterative Function*** - We create an iterative function that is similar to the recursive call function. All the conditions will be the same in both the methods, the only difference is that in memoization we do recursive calls whereas in the bottom-up approach we look up for previous cells in the matrix, this makes ***bottom-up approach a faster approach.***

```diff
- solved the classical knapsack problem using bottom-up approach.
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 SPOJ |[KNAPSACK - The Knapsack Problem](https://www.spoj.com/problems/KNAPSACK/) | [View Solution](./DAY-3/KNAPSACK-The_Knapsack_Problem(SPOJ).cpp) | Easy |||
<pre>
<b>Important Tip</b> -  The bottom-up approach is preferred over memoization because in the memoization technique 
we might get stack overflow on doing various recursive calls for large data.
</pre>

#### Though it's a rare condition. :sweat_smile::sweat_smile:
---
## Day - 4 :closed_book:
### Solved: Subset Sum Problem :pushpin::pushpin:
_It is a variation of the knapsack problem in which we are given an array of non-negative integers and a **required sum**. We need to find out that is it possible to create a subset of that array so that sum of elements of the subset equals the **required sum**._

```diff
@@ solved the subset sum problem @@
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 SPOJ |[PARTY - Party Schedule](https://www.spoj.com/problems/PARTY/) | [View Solution](./DAY-4/PARTY-Party_Schedule(SPOJ).cpp) | Easy |||
 GEEKSFORGEEKS |[Subset Sum Problem](https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1) | [View Solution](./DAY-4/Subset_Sum_Problem(GEEKSFORGEEKS).cpp) | Medium |||
  LEETCODE |[Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | [View Solution](./DAY-4/Partition_Equal_Subset_Sum(LEETCODE).cpp) | Medium |||

#### Finally DP started showing it's colors. :yellow_heart::blue_heart::purple_heart::green_heart::heart:
---
