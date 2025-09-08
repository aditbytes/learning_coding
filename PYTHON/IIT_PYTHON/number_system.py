num = input("Enter a number: ")

print ("/n conversions:")

print (f"Binary: {bin(int(num))}")
print (f"Octal: {oct(int(num))}")
print (f"Hexadecimal: {hex(int(num))}")
print (f"Decimal: {int(num)}")
print (f"Character: {chr(int(num))}")
print (f"Float: {float(num)}")  
print (f"Complex: {complex(num)}")
print (f"Boolean: {bool(int(num))}")

print (f"binary : {bin(int(num))[2:]}")
print (f"octal : {oct(int(num))[2:]}")
print (f"hexadecimal : {hex(int(num))[2:]}")
print (f"decimal : {int(num)}")