def maxst(n):
    temp = 0
    while True:
        if temp + 1 < n:
            temp += 1
            n = n - temp + 1
        else:
            break
    return temp


i = int(input("Enter number"))
print("Number of staircase", maxst(i))