def pivotIndex(nums):
  total_sum = sum(nums)
  left_sum = 0

  for i, num in enumerate(nums):
    if left_sum == total_sum - left_sum - num:
      return i
    left_sum += num

  return -1

exemplo1_nums = [1, 7, 3, 6, 5, 6]
exemplo2_nums = [1, 2, 3]
exemplo3_nums = [2, 1, -1]


print("Exemplo 1:", pivotIndex(exemplo1_nums)) # Saída: 3
print("Exemplo 2:", pivotIndex(exemplo2_nums)) # Saída: -1
print("Exemplo 3:", pivotIndex(exemplo3_nums)) # Saída: 0

