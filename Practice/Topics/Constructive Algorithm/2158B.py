import math
from collections import Counter
def solve():
    n = int(input())
    a = list(map(int,input().split()))
    mp = Counter(a);
    cnt:int = 0
    _4k = 0
    _4k_2 = 0
    odd_cnt = 0

    for key,val in mp.items():
        if val % 4 == 0:
            _4k += 1
        elif val % 4 == 2:
            _4k_2 += 1
        else:
            odd_cnt += 1
    ans = odd_cnt + (2 * _4k) + (2 * _4k_2)
    if (_4k % 2 != 0 and odd_cnt == 0):ans -= 2
    print(ans)
tc = int(input())
for _ in range(tc):
    solve()