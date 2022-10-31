
#no of rows
R = int(input())
#no of columns
C = int(intput())
matrix = [[int(input()) for x in range (C)] for y in range(R)]
for i in range(len(matrix)-1):
    for j in range(len(matrix[i])-1):
        if matrix[i][j]!=matrix[i+1][j+1]:
            print("No Toeplitz Matrix")
print("Toeplitz Matrix")
       
