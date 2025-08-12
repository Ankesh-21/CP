# import sys
from collections import *
import math
import heapq

def main():
    # # Redirect stdin to input.txt (for local testing)
    # sys.stdin = open('input.txt', 'r')
    # # Redirect stdout to output.txt (for local testing)
    # sys.stdout = open('output.txt', 'w')

    # Your code here
    # Example: Read input and print output
    test_cases = 1 # Number of test cases
    test_cases = int(input()) 
    for _ in range(test_cases):
        n , k = map(int,input().split())
        
        s = input()
        
        if k == 0:
            if s[-1] <= s[0]:
                print('NO')
                
            else:
                print('YES')
            continue
        
        if n==1:
            print('NO')
            continue
        p = sorted(s)
        if p[-1] == p[0]:
            print('NO')
            continue
        
        if k == 1:
            i = 0
            j = n-1
            
            smaller = 0
            larger = 0
            
            while i < j:
                if s[i] == s[j]:
                    if s[smaller] < s[j]:
                        smaller = j
                    if s[larger] > s[i]:
                        larger = i
                i+=1
                j -= 1
            if s[smaller] == s[larger]:
                print('NO')
                continue
        print('YES')

if __name__ == "__main__":
    main()