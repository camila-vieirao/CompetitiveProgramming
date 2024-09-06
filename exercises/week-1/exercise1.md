# Sum of Even Numbers After Query

You are given an array of integers `nums` and an array `queries` where `queries[i] = [val_i, index_i]`.

For each query `i`, first apply `nums[index_i] = nums[index_i] + val_i`, and then calculate the sum of the even values in `nums`.

Return an array `answer` where `answer[i]` is the result for the i-th query.

## Example 1:

- **Input**: nums = [1,2,3,4], queries = [[1,0],[-3,1],[-4,0],[2,3]]

- **Output**: [8,6,2,4]

- **Explanation**: Initially, the array is [1,2,3,4].
  - After adding 1 to `nums[0]`, the array becomes [2,2,3,4], and the sum of even numbers is 2 + 2 + 4 = 8.
  - After adding -3 to `nums[1]`, the array becomes [2,-1,3,4], and the sum of even numbers is 2 + 4 = 6.
  - After adding -4 to `nums[0]`, the array becomes [-2,-1,3,4], and the sum of even numbers is -2 + 4 = 2.
  - After adding 2 to `nums[3]`, the array becomes [-2,-1,3,6], and the sum of even numbers is -2 + 6 = 4.

## Example 2:

- **Input**: nums = [1], queries = [[4,0]]
- **Output**: [0]

## Constraints:

- $1 \leq nums.length \leq 10^4$
- $-10^4 \leq nums[i] \leq 10^4$
- $1 \leq queries.length \leq 10^4$
- $-10^4 \leq val_i \leq 10^4$
- $0 \leq index_i < nums.length$

## My Solution:
[exercise1.py](/exercises/week-1/exercise1.py)