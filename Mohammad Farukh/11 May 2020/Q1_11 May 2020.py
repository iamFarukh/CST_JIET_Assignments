def findSingleOne(arr, n):
    temp = arr[0]
    for i in range(1,n):
        temp = temp^arr[i]

    return temp


# creating an empty list
arr = []

# number of elemetns as input
n = int(input("Enter number of elements : "))

# Input from the user
print("Gives the Elements of Array")
for i in range(0, n):
    ele = int(input())
    arr.append(ele)  # adding the element

# Printing That Element

print("Element that Occuring once is : ", findSingleOne(arr, len(arr)))