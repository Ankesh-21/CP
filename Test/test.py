import sys
from collections import *
import math
import heapq

def main():
    # Redirect stdin to input.txt (for local testing)
    sys.stdin = open('input.txt', 'r')
    # Redirect stdout to output.txt (for local testing)
    sys.stdout = open('output.txt', 'w')

    # Your code here
    # Example: Read input and print output
    test_cases = 1 # Number of test cases
    test_cases = int(input()) 
    for _ in range(test_cases):
        a = list(map(int, input().split()))  # Read a list of integers
        print(a)  # Print the list

if __name__ == "__main__":
    main()