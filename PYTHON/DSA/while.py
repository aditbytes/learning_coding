a = input ("Enter a number: ")

while a != "0":
    if a.isdigit():
        a = int(a)
        if a % 2 == 0:
            print(f"{a} is even")
        else:
            print(f"{a} is odd")
    else:
        print("Please enter a valid number.")
    a = input("Enter a number (or 0 to exit): ")