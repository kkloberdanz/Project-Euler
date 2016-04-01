maxSequence = 0
for i in range(1,1000000):
    if i % 100000 == 0:
        print(i)
    n = i
    startingNumber = n
    lenOfCurrentSequence = 0
    while n != 1:
        if n % 2 == 0:
            n = n / 2
        else:
            n = 3 * n + 1
        lenOfCurrentSequence += 1
        if maxSequence < lenOfCurrentSequence:
            maxSequence = lenOfCurrentSequence
            maxStartingNumber = startingNumber

print(maxStartingNumber )

