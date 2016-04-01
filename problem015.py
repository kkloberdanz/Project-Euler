num = 2**1000

num_as_str = str(num)

total = 0
for digit in num_as_str:
    total += int(digit)
print(total)
