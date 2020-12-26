# Dynamic Programming :rocket::rocket:
### CP is OP :heart:  Saying hi to DP! :fire::fire:
---
<br/>


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
##### 🎥Tutorial Link - https://www.youtube.com/watch?v=l02UxPYRmCQ&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=2

#### It all started with Day-1 :fire::fire:
---

## Day - 2 :green_book:
### Memoization: Top - Down Approach :pushpin::pushpin:
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
 GEEKSFORGEEKS |[0 - 1 Knapsack Problem](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0) | [View Solution](./DAY-02/0-1_Knapsack_Problem_(GEEKSFORGEEKS).cpp) | Easy |||
<pre>
<b>Important Tip</b> -  std::vector's at() function is similar to subscript operator [ ].
But when the performance is measured at() function is 3.1 times faster then subscript operator [ ]. 
</pre>

##### 🎥Tutorial Link - https://www.youtube.com/watch?v=kvyShbFVaY8&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=3
##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=fJbIuhs24zQ&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=4

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
 SPOJ |[KNAPSACK - The Knapsack Problem](https://www.spoj.com/problems/KNAPSACK/) | [View Solution](./DAY-03/KNAPSACK-The_Knapsack_Problem(SPOJ).cpp) | Easy |||
<pre>
<b>Important Tip</b> -  The bottom-up approach is preferred over memoization because in the memoization technique 
we might get stack overflow on doing various recursive calls for large data.
</pre>

##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=ntCGbPMeqgg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=5


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
 SPOJ |[PARTY - Party Schedule](https://www.spoj.com/problems/PARTY/) | [View Solution](./DAY-04/PARTY-Party_Schedule(SPOJ).cpp) | Easy |||
 GEEKSFORGEEKS |[Subset Sum Problem](https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1) | [View Solution](./DAY-04/Subset_Sum_Problem(GEEKSFORGEEKS).cpp) | Medium |||
  LEETCODE |[Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | [View Solution](./DAY-04/Partition_Equal_Subset_Sum(LEETCODE).cpp) | Medium |||

##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=7
##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=8

#### Finally DP started showing it's colors. :yellow_heart::blue_heart::purple_heart::green_heart::heart:

---
## Day - 5 :notebook:
### Solved: Count of Subsets with Required Sum :pushpin::pushpin:
_It is a slight variation of the *Subset Sum Problem* in which we are given an array of non-negative integers and a **required sum**. We need to find out the count of the total number of subsets of the given array whose sum equals the **required sum**._

```diff
! solved the Count of Subsets with Required Sum Problem
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Perfect Sum Problem](https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1) | [View Solution](./DAY-05/Perfect_Sum_Problem(GEEKSFORGEEKS).cpp) | Medium |||

##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=9
#### :walking: “I walk slowly, but never backwards.” :walking: - — Abraham Lincoln :pray: :pray:

---
## Day - 6  :orange_book:
### Solved: Minimum Sum Partition Problem :pushpin::pushpin:
_Again its a variation of the **Subset Sum Problem**. The problem statement states that we are given an array with non-negative integers and our task is to divide the elements of that array into two subsets such that the absolute difference between their sums is **minimum.**_

```diff
+ solved the subset sum problem
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Minimum sum partition](https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1) | [View Solution](./DAY-06/Minimum_sum_partition(GEEKSFORGEEKS).cpp) | Hard |||
##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=10
#### Some days are harder than others :confounded: :triangular_flag_on_post: :relieved:


---
## Day - 7  :blue_book:
### Solved: Count of Subsets with required difference :pushpin::pushpin:
_This is a variation of **Minimum Sum Partition Problem interesting problem**. In this, we are given an array with non-negative integers and our task is to divide the elements of that array into two subsets such that the absolute difference between their sums equals  **required difference.**_

##### Two equations to solve the problem are:
```cpp
 s1 = sum of 1st subset
 s2 = sum of 2nd subset
 S = required difference
 range = sum of entire array


 s1 - s2 = S 			//equation 1
 s1 + s2 = range		//equation 2

 // on solving eq1 and eq2 we get
 s1 = (range + S)/2
```
##### Target sum - It's an awesome problem. Must try:- https://leetcode.com/problems/target-sum/

### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 INTERVIEW BIT |[Minimum Difference Subsets!](https://www.interviewbit.com/problems/minimum-difference-subsets/) | [View Solution](./DAY-07/Minimum_Difference_Subsets!(INTERVIEWBIT).cpp) | Hard |||
  LEETCODE |[Target Sum :rocket:](https://leetcode.com/problems/target-sum/) | [View Solution](./DAY-07/Target_Sum(LEETCODE).cpp) | Hard |||
  
  ```diff
- solved count of subsets with given difference
```
  ##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=11
  ##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=12
####  :yellow_heart:  7-Days Streak. :blue_heart: 7-Days of CP.  :purple_heart: 7-Days of DP :green_heart: 7-Days of OP :heart:
---
## Day - 8  :green_book:
### Solved: Unbounded Knapsack:pushpin::pushpin:
_**Unbounded Knapsack Problems** are slightly different from **0/1 Knapsack Problems**. In this, we can include the same item multiple numbers of times inside the knapsack and our aim is to just maximize the profit._ 
##### We just need to change one condition:

```cpp
//0-1 Knapsack
if(weight[i-1] <= j)
dp[i][j] = max((value[i-1] + dp[i-1][j-weight[i-1]]), dp[i-1][j]);

// Unbounded Knapsack
if(weight[i-1] <= j)
dp[i][j] = max((value[i-1] + dp[i][j-weight[i-1]]), dp[i-1][j]);
```

### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 HACKERRANK |[Knapsack](https://www.hackerrank.com/challenges/unbounded-knapsack/problem) | [View Solution](./DAY-08/Knapsack(HACKERRANK).cpp) | Medium |||
  GEEKSFORGEEKS |[Knapsack with Duplicate Items](https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1) | [View Solution](./DAY-08/Knapsack_with_Duplicate_Items(GEEKSFORGEEKS).cpp) | Medium |||
```diff
@@ solved Unbounded Knapsack Problem @@
```

##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=13
  
####  Visited HackerRank after so Long ! Nostalgic :dizzy: :smile:
---

## Day - 9  :ledger:
### Solved: Rod Cutting Problem:pushpin::pushpin:
_**Problem Statement:** Given a rod of length **n** and an array of prices that contains prices of all pieces of size ranging from **1 to  n**. Determine the maximum value obtainable by cutting up the rod and selling the pieces._ 

### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Reach a given score](https://practice.geeksforgeeks.org/problems/reach-a-given-score/0) | [View Solution](./DAY-09/Reach_a_given_score(GEEKSFORGEEKS).cpp) | Easy |||
  GEEKSFORGEEKS |[Rod Cutting](https://practice.geeksforgeeks.org/problems/rod-cutting/0/?category) | [View Solution](./DAY-09/Rod_Cutting(GEEKSFORGEEKS).cpp) | Easy |||

```diff
! solved Rod Cutting Problem
```

##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=14
  
####  Set Goals.  :star2:  Say Prayers. :pray:  Work Hard. :muscle:
---
## Day - 10  :closed_book:
### Solved: Coin Change Problem:moneybag: :moneybag:
_**Problem Statement:** You are given a value N and array of coins. You need to find out the number of ways in which you can get value N from that coins. There is infinite supply of coins.(Unbounded Knapsack :wink:)_ 

### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Coin Change](https://practice.geeksforgeeks.org/problems/coin-change2448/1) | [View Solution](./DAY-10/Coin_Change(GEEKSFORGEEKS).cpp) | Medium |||
  HACKERRANK |[The Coin Change Problem](https://www.hackerrank.com/challenges/coin-change/problem) | [View Solution](./DAY-10/The_Coin_Change_Problem(HACKERRANK).cpp) | Medium |||
  LEETCODE |[Coin Change 2](https://leetcode.com/problems/coin-change-2/) | [View Solution](./DAY-10/Coin_Change_2(LEETCODE).cpp) | Medium |||

```diff
+ solved Rod Cutting Problem
```
##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=15
##### 🎥Tutorial Link -  https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=16

  
#### Prove Them Wrong :wink: :wink:


---
## Day - 11  :notebook:
### Solved: Maximize The Cut Segments Problem :pushpin: :pushpin:
 _**Problem Statement:** Given an integer **N** denoting the Length of a line segment. you need to cut the line segment in such a way that the cut length of a line segment each time is integer either **x**, **y**, or **z**. and after performing all cutting operations the total number of cut segments must be maximum._ 

```diff
- solved Coin Change 2 Problem
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Maximize The Cut Segments](https://practice.geeksforgeeks.org/problems/cutted-segments/0) | [View Solution](./DAY-11/Maximize_The_Cut_Segments(GEEKSFORGEEKS).cpp) | Easy |||
  LEETCODE |[Coin Change](https://leetcode.com/problems/coin-change/) | [View Solution](./DAY-11/Coin_Change(LEETCODE).cpp) | Medium |||
  GEEKSFORGEEKS |[Number of Coins](https://practice.geeksforgeeks.org/problems/number-of-coins1824/1) | [View Solution](./DAY-11/Number_of_Coins(GEEKSFORGEEKS).cpp) | Medium |||
  <pre>
<b>Important Tip</b> -  This is a unique problem of Knapsack Family. 
In this, we have to initialize 2nd row as well.
</pre>
```cpp
for(int i =1; i<amount+1;i++)
{
	if(i%coins[0] == 0)
		dp[1][i] = i/coins[0];
	else
		dp[1][i] = INT_MAX -1;
}
```

#### Finally, struggled for 3 days to solve Maximize The Cut Segments  :relieved: :relieved:
---

## Day - 12  :orange_book:
### Longest Common Subsequence :pushpin: :pushpin:
 _**Problem Statement:** Given two strings  **s1** and **s2**, find the length of the longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous._ 

```diff
@@ solved Longest Common Subsequence using Recursion @@
```
The longest common subsequence problem is a classic computer science problem, the basis of data comparison programs such as the diff utility, and has applications in computational linguistics and bioinformatics. :rocket::rocket::rocket:

#### Believe me! You are awesome! :blush:
---

## Day - 13  :blue_book:
### Solved: # Longest common subsequence Memoization :pushpin: :pushpin:
Did the LCS problem using the Bottom-up approach(Memoisation). 

```diff
! solved Longest Common Subsequence using Memoization
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Longest Common Subsequence](https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0) | [View Solution](./DAY-13/Longest_Common_Subsequence(GEEKSFORGEEKS).cpp) | Medium |||
 
  
#### It was the most challenging day to maintain streak :disappointed: :disappointed:

---

## Day - 14  :green_book:
### Solved: # Longest common subsequence Tabulation :pushpin: :pushpin:
Did the LCS problem using the Top-Down approach(Tabulation ). 

```diff
+ solved Longest Common Subsequence using Tabulation. 
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 LEETCODE|[Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | [View Solution](./DAY-14/Longest_Common_Subsequence(LEETCODE).cpp) | Medium |||
 
  
#### Be Savage. Not Average :fire: :wink: :boom:

---

## Day - 15  :ledger:
### Solved:  Longest Common Substring :pushpin: :pushpin:

_**Problem Statement:** Given two strings **s1** and **s2**. The task is to find the length of the **longest common substring.**_ 

#### Subarray vs Substring vs Subsequence
- _A **subarray** is a contiguous sequence of elements within an array. For example, the subarrays of the array `{1, 2, 3}` would be `{1}`, `{2}`, `{1, 2}`, `{2, 3}`, `{1, 2, 3}`, `{}`._
- _A **substring** is exactly the same thing as a subarray but in the context of strings. For example, the substrings of the string `"dhruv"` would be `"d"`, `"dh"`, `"ru"`, `"uv"`, `"hruv"`, `"hru"`, `"dhru"`, `"ruv"`, `"hr"`,  `""`, etc._
- _A  **subsequence** is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements. For example, the subsequenceof the string `"dhruv"` would be `"d"`, `"du"`, `"rv"`, `"dhv"`, `"hrv"`, `"drv"`, `"dhru"`, `"dv"`, `"v"`,  `""`, etc._

```diff
- solved the Longest Common Substring.
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 LEETCODE|[Maximum Length of Repeated Subarray](https://leetcode.com/problems/maximum-length-of-repeated-subarray/) | [View Solution](./DAY-15/Maximum_Length_of_Repeated_Subarray(LEETCODE).cpp) | Medium |||
 GEEKSFORGEEKS|[Longest Common Substring](https://practice.geeksforgeeks.org/problems/longest-common-substring/0) | [View Solution](./DAY-15/Longest_Common_Substring(GEEKSFORGEEKS).cpp) | Medium ||| 
  
#### Let the streak going. Don't give a `<br />` :laughing: :laughing:
---
## Day - 16 :closed_book:
### Solved:  Printing LCS :pushpin: :pushpin:

_**Problem Statement:** Given two strings  **s1** and **s2**, print the longest subsequence present in both of them._ 
It's a unique question as in this question we need to traverse back into our DP array and check for positions where characters are matching
```cpp
string s1 = "coding";
string s2 = "cubing";
--------------------------
dp array 
     c o d i n g
   0 0 0 0 0 0 0 
    \
c  0 1 1 1 1 1 1
     | 
u  0 1 1 1 1 1 1
     | 
b  0 1-1-1 1 1 1
          \ 
i  0 1 1 1 2 2 2
            \
n  0 1 1 1 2 3 3
              \ 
g  0 1 1 1 2 3 4
---------------------------
output => cing
```

```diff
@@ solved the Printing LCS. @@
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 HACKERRANK|[The Longest Common Subsequence](https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem) | [View Solution](./DAY-16/The_Longest_Common_Subsequence(HACKERRANK).cpp) | Medium |||
  
#### I'd Rate My Programming Puns C++ :smirk: :smirk:

---
## Day - 17 :notebook:
### Solved:  Shortest Common Supersequence :pushpin: :pushpin:

_**Problem Statement:** Given two strings **str1** and **str2**, find the length of the smallest string which has both, **str1** and **str2** as its sub-sequences._ 


```diff
! solved Shortest Common Supersequence. 
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Shortest Common Supersequence](https://practice.geeksforgeeks.org/problems/shortest-common-supersequence/0#) | [View Solution](./DAY-17/Shortest_Common_Supersequence(GEEKSFORGEEKS).cpp) | Easy|||
  
#### A rabbit aims for the moon  :confused: 


---
## Day - 18 :orange_book:
### Solved:  Minimum Number of Deletions and Insertions :pushpin: :pushpin:

_**Problem Statement:** Given two strings **str1** and **str2**. Your task is to convert **str1** to **str2**. You can only perform two types of operations that are **remove** or **insert**. Find the minimum number of operations required to convert **str1**  into **str2**._ 


```diff
+ solved Minimum Number of Deletions and Insertions. It's a simpler version of classical Edit Distance Problem 
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Minimum number of deletions and insertions](https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1) | [View Solution](./DAY-18/Minimum_number_of_deletions_and_insertions(GEEKSFORGEEKS).cpp) | Easy|||
  
#### Please Don't Let Your Dreams Die :pray: :pray: 


---
## Day - 19 :blue_book:
### Solved:  Longest Palindromic Subsequence :pushpin: :pushpin:

_**Problem Statement:** Given a string **str1**. Your task is to find the Longest Palindromic Subsequence of that string **s1**.._ 


```diff
- solved Longest Palindromic Subsequence. 
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Longest Palindromic Subsequence](https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence/0#) | [View Solution](./DAY-19/Longest_Palindromic_Subsequence(GEEKSFORGEEKS).cpp) | Easy|||
  LEETCODE |[Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) | [View Solution](./DAY-19/Longest_Palindromic_Subsequence(LEETCODE).cpp) | Medium|||
   INTERVIEWBIT |[Longest Palindromic Subsequence](https://www.interviewbit.com/problems/longest-palindromic-subsequence/) | [View Solution](./DAY-19/Longest_Palindromic_Subsequence(INTERVIEWBIT).cpp) | Medium|||
  
#### Be Different.  Be Awesome. :wink: :dizzy: 

---
## Day - 20 :green_book:
### Solved: Minimum Deletions to make string Palindromic :pushpin: :pushpin:

_**Problem Statement:** Given a string of **s1**. Your task is to remove or delete minimum number of characters from the string so that the resultant string is palindrome._ 


```diff
@@ solved Minimum Deletions to make string Palindromic. @@
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Minimum Deletions](https://practice.geeksforgeeks.org/problems/minimum-deletitions/0) | [View Solution](./DAY-20/Minimum_Deletions(GEEKSFORGEEKS).cpp) | Easy|||
  
#### Stay Patient. Trust your journey. :relieved: :round_pushpin: 

---
## Day - 21 :ledger:
### Solved: Printing Shortest Common Supersequence :pushpin: :pushpin:

_**Problem Statement:** Given two strings **str1** and **str2**, print the smallest string which has both, **str1** and **str2** as its sub-sequences._ 


```diff
! solved Printing Shortest Common Supersequence.
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 LEETCODE |[Shortest Common Supersequence](https://leetcode.com/problems/shortest-common-supersequence/) | [View Solution](./DAY-21/Shortest_Common_Supersequence(LEETCODE).cpp) | Hard|||
  
#### :yellow_heart:  21-Days Streak. :blue_heart: 21-Days of CP.  :purple_heart: 21-Days of DP :green_heart: 21-Days of OP :heart:

---
## Day - 22 :closed_book:
### Solved: Longest Repeating Subsequence :pushpin: :pushpin:

_**Problem Statement:** Given a string  **s**, find the length of the longest repeating SubSequence such that the two subsequences don’t have the same string character in the same position, i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string._ 
```diff
+ solved Longest Repeating Subsequence.
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Longest Repeating Subsequence](https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence/0#) | [View Solution](./DAY-22/Longest_Repeating_Subsequence(GEEKSFORGEEKS).cpp) | Easy|||
  INTERVIEWBIT|[Repeating Sub-Sequence](https://www.interviewbit.com/problems/repeating-subsequence/) | [View Solution](./DAY-22/Repeating_Sub-Sequence(INTERVIEWBIT).cpp) | Medium|||
  
#### Hey ! We are still at Day-0!  :relieved: :relieved:

---
## Day - 23  :notebook:
### Solved: Is Subsequence ? :pushpin: :pushpin:
 _**Problem Statement:** Given two strings **str1** and  **str2**, check if **str1** is subsequence of **str2**.._ 

```diff
- solved Is Subsequence ?
```

  <pre>
<b>Important Tip</b> -  This question can be solved in O(n) time complexity without DP also. But still DP  is Awesome.
</pre>
```cpp
Approach: Simpply we can apply LCS on both str1 and str2, 
and then we can check that the Length of LCS is equals to s1 or not.

if(dp[n][m] == s1.length())
	return true;
else
	return false;
```

#### LIVE :dizzy:  LAUGH :laughing: CODE :computer:

---
## Day - 24 :orange_book:
### Solved: Minimum Insertion Steps to Make a String Palindrome :pushpin: :pushpin:

_**Problem Statement:** Given a string  **s**, find the minimum number of insertion operations you could perform on the string to make the string palindromic._ 
```diff
@@ solved Minimum Insertion Steps to Make a String Palindrome. @@
```
### Problem solved
|  Platform    | Title           |  Solution       | Difficulty    |
|--------------|---------------- | --------------- |---------------|
 GEEKSFORGEEKS |[Form a palindrome](https://practice.geeksforgeeks.org/problems/form-a-palindrome/0) | [View Solution](./DAY-24/Form_a_palindrome(GEEKSFORGEEKS).cpp) | Medium|||
 LEETCODE|[Minimum Insertion Steps to Make a String Palindrome](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/) | [View Solution](./DAY-24/Minimum_Insertion_Steps_to_Make_a_String_Palindrome(LEETCODE).cpp) | Hard|||
  SPOJ|[IOIPALIN - Palindrome 2000](https://www.spoj.com/problems/IOIPALIN/) | [View Solution](./DAY-24/Palindrome_2000(SPOJ).cpp) | Medium|||
  
#### Its Okay ! Try Again  :muscle: :angel:

---

## Day - 25 :blue_book:
### Solved: Matrix Chain Multiplication (Recursive):pushpin: :pushpin:

_**Problem Statement:** Given an array p[] which represents the chain of matrices such that the ith matrix Ai is of dimension p[i-1] x p[i]. We need to write a function that should return the minimum number of multiplications needed to multiply the chain._ 

**Optimal Substructure Solution:**  
In this approach, we can place parenthesis at all possible places and then calculate the cost, and finally, we can find the minimum value. _**For example, if the given chain is of 4 matrices. let the chain be ABCD, then there are 3 ways to solve: (A)(BCD), (AB)(CD), and (ABC)(D). So when we place a set of parentheses, we divide the problem into subproblems of smaller size. Therefore, the problem has optimal substructure property and can be easily solved using recursion.**_
```diff
! solved Matrix Chain Multiplication (Recursive).
```

  
#### If you avoid difficult things, great things will avoid you :dizzy: :green_heart:

---

## Day - 26:green_book:
### Solved: Matrix Chain Multiplication (Memoisation):pushpin: :pushpin:

_**Problem Statement:** Given an array p[] which represents the chain of matrices such that the ith matrix Ai is of dimension p[i-1] x p[i]. We need to write a function that should return the minimum number of multiplications needed to multiply the chain._ 

Just 4 more lines of code....and 💥💥💥 now your code is Memoised. :heart:

```diff
+ solved Matrix Chain Multiplication (Memoisation).
```

  
#### Those Who Cannot Remember the Past are Condemned to Repeat It :laughing: :laughing: ~ Dynamic Programming :dizzy:

---

