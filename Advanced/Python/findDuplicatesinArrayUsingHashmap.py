#copyright - Aman-Verma-28

def findDuplicates(arr,n):
    """
        param arr: the given array
        param n  : length of the array
        return   : an array after removing all duplicates
    """

    newSet = set()
    for i in arr:
        if i not in newSet:
            newSet.add(i)
    
    # this newSet contains all unique elements of the array
    newArr = list(newSet)
    #this newArr will have all unique elements of the given array in array form

    return newArr

length = int(input("Enter the length of the array"))
arr = list(map(int,input().split()))

uniqueArray = findDuplicates(arr,length)

print(*uniqueArray)
