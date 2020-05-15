# The Main logic

def search(mat, n, x):
    i = 0

    # set indexes for top right element
    j = n - 1
    while (i < n and j >= 0):

        if (mat[i][j] == x):
            print(" n is Found at ", i, ", ", j)
            return 1

        if (mat[i][j] > x):
            j -= 1


        else:
            i += 1

    print("Element not found")
    return 0



# Code for matrix input from user

N = int(input("Enter the number of rows:"))

# Initialize matrix
mat = []
print("Enter the entries rowwise:")

# For user input
for i in range(N):  # A for loop for row entries
    a = []
    for j in range(N):  # A for loop for column entries
        a.append(int(input()))
    mat.append(a)

# Input Element to be Search
Search = int(input("Enter the Element to Search:"))

# Call the Function
search(mat,N,Search)