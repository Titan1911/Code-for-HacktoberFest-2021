str = "abcd"
n = len(str)
arr = []

for i in range(0, n):
    for j in range(i, n):
        arr.append(str[i:(j+1)])

print("All subsets of abcd are: ")
for i in arr:
    print(i)
