def prime(n):
    if n>1:
        for i in range(2,n//2):
            if(n%i)==0:
                return False
        else:
            return True
    else:
        return False

    
l= [
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12]
]
n=3
m=4
count=0
for i in range(n):
    for j in range(m):
        sum=0
        if 0<=i-1:
            sum+=l[i-1][j]
        if 0<=j-1:
            sum+=+l[i][j-1]
        if i+1<= n-1:
            sum+=l[i+1][j]
        if j+1<= m-1:
            sum+=l[i][j+1]
        #print(sum)
        if prime(sum):
            count+=1
print("Number of adjacent prime sum",count)