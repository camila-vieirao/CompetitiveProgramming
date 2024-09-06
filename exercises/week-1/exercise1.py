def sumOfEvenAferQueries(nums, queries):
    even_sum = sum(num for num in nums if num % 2 == 0)
    answer = []

    for val, index in queries:
        if nums[index] % 2 == 0:
            even_sum -= nums[index]

        nums[index] += val

        if nums[index] % 2 == 0:
            even_sum += nums[index]

        answer.append(even_sum)

    return answer

exemplo1_num = [1, 2, 3, 4]
exemplo1_queries = [[1, 0], [-3, 1], [-4, 0], [2, 3]]

exemplo2_num = [1]
exemplo2_queries = [[4, 0]]

print("\nExemplo 1: ", sumOfEvenAferQueries(exemplo1_num, exemplo1_queries))  # Saída: [8, 6, 2, 4]
print("\nExemplo 2:", sumOfEvenAferQueries(exemplo2_num,exemplo2_queries))  # Saída: [0]