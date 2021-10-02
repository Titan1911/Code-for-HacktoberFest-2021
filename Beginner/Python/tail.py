def prints(n):

    if (n < 0):
        return
    print(str(n), end=' ')

    prints(n-1)
