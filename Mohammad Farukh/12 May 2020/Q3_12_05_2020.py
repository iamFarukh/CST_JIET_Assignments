# Code for matrix input from user

R = int(input("Enter the number of rows:"))
C = int(input("Enter the number of columns:"))

# Initialize matrix
matrix = []
print("Enter the entries rowwise:")

# For user input
for i in range(R):  # A for loop for row entries
    a = []
    for j in range(C):  # A for loop for column entries
        a.append(int(input()))
    matrix.append(a)
count =0
sum = 0

#logic is Here
for i in range(R):
    for j in range(C):
        if ((matrix[j][i]) == 1):
            count = count + 1
    if count % 2 == 1:
        sum = sum + 1

print(sum)
