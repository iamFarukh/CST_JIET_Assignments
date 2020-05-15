def MinXorValue(arr,n):
    # Sort the Given array for Finding the Minimum Values
    arr.sort()

    min_xor=999999
    value = 0    # set a temporary Value


    # here the Main Logic
    for i in range(0, n - 1):
        for j in range(i + 1, n - 1):
            # update minimum xor value
            val = arr[i] ^ arr[j]
            min_xor = min(min_xor, val)
    return min_xor

    return


# creating an empty list
arr = []

# number of elemetns as input
n = int(input("Enter number of elements : "))

# Input from the user
print("Gives the Elements of Array")
for i in range(0, n):
    ele = int(input())
    arr.append(ele)  # adding the element

print("Minimun Xor value is : ",MinXorValue(arr,len(arr)))