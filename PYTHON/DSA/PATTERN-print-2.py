# n = int(input ("Enter a number: "))

# for currRow in range(n):
#     for currNum in range(n):
#         if currNum <= currRow:
#             print(currNum + 1, end=' ')
#         else:
#             print(" ", end=' ')
#     print()  # Move to the next line after each row


n = int(input("enter a number: "))

for currRow in range(n):
    for currNum in range(n):
        if currNum <= currRow:
            print(currNum + 1, end=' ')
        else:
            break

    print()  # Move to the next line after each row