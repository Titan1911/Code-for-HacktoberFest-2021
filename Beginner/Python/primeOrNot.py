def check(num):
    if num==2 or num==3:
        return True
    if num==1 or num%2==0 or num%3==0:
        return False

    for i in range(3,num,2):
        if num%i==0:
            return False

    return True

num = int(input("Enter a number: "))

if check(num):
    print("Prime")
else:
    print("Not Prime")
