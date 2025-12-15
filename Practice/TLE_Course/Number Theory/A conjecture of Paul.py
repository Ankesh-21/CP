import math
primes = [True for _ in range(1000001)]
def sieve():
    primes[0] = primes[1] = False
    for i in range(2,(int)(math.sqrt(1000000))):
        if primes[i]:
            j = i * i
            while (j <= 1000000):
                primes[j] = False
                j += i

def solve():
    n = int(input())
    cnt = 0
    for i in range((int)(math.sqrt(n))):
        for j in range((int)(n ** (1/4)) + 1):
            num = (int)(i ** 2) + (int)(j ** 4)
            if primes[num]:
                cnt += 1

    print(cnt)

tc = int(input())
sieve()
for _ in range(tc):
    solve()