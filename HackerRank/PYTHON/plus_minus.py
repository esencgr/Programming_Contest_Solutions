# -*- coding: utf-8 -*-
# import math
# import os
# import random
# import re
# import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    neg = 0
    pos = 0
    zero = 0
    sz = len(arr)
    for i in arr:
        if i < 0:
            neg += 1
        if i == 0:
            zero += 1
        if i > 0:
            pos += 1
    print(pos / sz)
    print(neg / sz)
    print(zero / sz)

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().split()))

    plusMinus(arr)
