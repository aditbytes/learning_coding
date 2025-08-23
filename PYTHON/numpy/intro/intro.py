temperature = [32.5 , 31.8 , 33.0 ,35.2 ,36.6]

total = 0 

for temp in temperature :
    total += temp 

average = total /len(temperature)
print(average)






import numpy as np 

print (f"numpy version {np.__version__}")