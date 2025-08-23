n = int(input ("Enter a number: "))
m = int(input ("Enter the limit: "))

for i in range(n):
    for j in range(m):
        print(j + 1, end=' ')
    print(" ")