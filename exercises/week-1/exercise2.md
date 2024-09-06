# Find Pivot Index

Given an array of integers `nums`, calculate the *pivot index* of this array.

The *pivot index* is the index where the sum of all numbers strictly to the left of the index is equal to the sum of all numbers strictly to the right of the index.

If the index is at the left edge of the array, the sum on the left is $0$ because there are no elements to the left. The same applies to the right edge of the array.

Return the *leftmost pivot index*. If no such index exists, return $-1$.

## Example 1:

- **Input**: nums = [1,7,3,6,5,6]  
- **Output**: 3  

- **Explanation**:  
The pivot index is 3.  
Sum to the left = $nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11$  
Sum to the right = $nums[4] + nums[5] = 5 + 6 = 11$

## Example 2:

- **Input**: nums = [1,2,3]  
- **Output**: $-1$  

- **Explanation**:  
There is no index that satisfies the conditions in the problem statement.

## Example 3:

- **Input**: nums = [2,1,-1]  
- **Output**: 0  

- **Explanation**:  
The pivot index is 0.  
Sum to the left = $0$ (there are no elements to the left of index 0)  
Sum to the right = $nums[1] + nums[2] = 1 + (-1) = 0$


## My Solution:
[exercise2.py](/exercises/week-1/execise2.py)