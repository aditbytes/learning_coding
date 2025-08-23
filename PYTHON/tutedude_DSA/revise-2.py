limit = 10 
currsum = 0

while True:
    num = int(input(" Enter a number: "))
    if currsum + num > limit:
        print(currsum , "Limit exceeded")
        break

    currsum += num
    print("Current sum is:", currsum)   