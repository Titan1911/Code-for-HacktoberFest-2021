# Python Program for Implementing
# prefix sum array

# Fills prefix sum array
def fillPrefixSum(arr, n, prefixSum):

	prefixSum[0] = arr[0]

	# Adding present element
	# with previous element
	for i in range(1, n):
		prefixSum[i] = prefixSum[i - 1] + arr[i]

# Driver code
arr =[10, 4, 16, 20 ]
n = len(arr)

prefixSum = [0 for i in range(n + 1)]

fillPrefixSum(arr, n, prefixSum)

for i in range(n):
	print(prefixSum[i], " ", end ="")

