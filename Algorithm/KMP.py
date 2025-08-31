'''
@ KMP Pattern Matching
@ T.C : O(N + M) # M = text size , N = pattern size
@ S.C : O(N)
'''
import sys
sys.stdin = open('input.txt','r')
sys.stdout = open('output.txt','w')
# @ Getting the substr which is prefix as well as suffix 
def precompute(p):
    lps = [0 for _ in range(len(p))]
    j = 0
    for i in range(1,len(p)):
        while j > 0 and p[i] != p[j]:
            j = lps[j-1]
        if p[i] == p[j]:
            lps[i] = j + 1
            j += 1
    return lps

def solve():
    text = input()
    pattern = input()

    LPS = precompute(pattern)
    print(LPS)

    i = 0
    j = 0
    while (i < len(text) and j < len(pattern)):
        if (text[i] == pattern[j]):
            i += 1
            j += 1
        else:
            # if not get least common prefix that is also a suffix
            if j != 0:
                j = LPS[j-1]
            else:
                i += 1
    if j == len(pattern):
        print(f'pattern found at index {i - j}')
        return True
    return False
tc = 1
tc = int(input())
for _ in range(tc):
    print('Yes') if solve() else print('No')