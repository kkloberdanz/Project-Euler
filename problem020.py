import math
bignum = math.factorial(100)

num_as_str = str(bignum)

total = 0
for digit in num_as_str:
    total += int(digit)
print(total)
