n = int(input("Enter a number: "))

i = 0 
while i < n:
    if i % 2 == 0:
        print ("0", end ="")
    else:
        print ("*", end ="")
    
    i += 1
    print()  # Print a newline after the loop ends