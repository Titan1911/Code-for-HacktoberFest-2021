#copyright Aman-Verma-28

#Question - Binary search for 3 in 2 4 8 9 1 3 6

# Given the array as - 2 4 8 9 1 3 6
# We know the binary search works only on sorted arrays

givenArray = [2, 4, 8, 9, 1, 3, 6]

#sorting the given array by using the inbuilt tim sort method of python

givenArray.sort()

def binSearch(array, key):
    """
    :param array: The given sorted array where we want to search our key
    :param key: The given key which we want to search in the sorted array
    :return: Returns the index of the key if it is present in the array else it will return -1 if the key is not present in the array
    """

    low=0
    high=len(array)-1

    # low indicates the lower index the left index
    # high indicated the higher index the right side pointer

    while low<=high:
        mid = (low+high)//2
        # middle index where we will be searching in this particular
        if array[mid]==key:
            return mid
            # If the key is found at index mid

        if array[mid]>key:
            high = mid - 1
            # If the key is in the right half of array
        else:
            low = mid + 1
            # If the key is in the left half of array
    return -1
    # If the key is not found

key = 3 # Key to be found

index = binSearch(givenArray, key)

if index==-1:
    print("Key is not found in array")
else:
    print("Key is found in the array at index", index)

