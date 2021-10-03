import random

data = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+-=.,</>" # password string data
amount = input("Please input the amount of password to generate: ") # user input amount of password
amount = int(amount) # convert input to integer

pwlength = input("Please input the length of password: ") # user input length of password
pwlength = int(pwlength) # convert input to integer

print("\n\nHere are the passwords:")

for i in range(amount):
    pw = ''
    for j in range(pwlength):
        pw += random.choice(data)
    print(pw) # print all password
