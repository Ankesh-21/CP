# T.C = O(Log(b))

def findPower(a,b):
    if b == 0:
        return 1
    if b%2 != 0:
        return a * findPower(a,b-1)
    else:
        return findPower(a,b/2) * findPower(a,b/2)

a = 3
b = 4
print(findPower(a,b))