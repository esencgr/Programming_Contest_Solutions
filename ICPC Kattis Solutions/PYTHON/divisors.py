# https://open.kattis.com/problems/divisors

# from sys import stdin
import math
import fileinput 

# def combination(n, k):
#     nfact = 1
#     kfact = 1
#     for i in range(0, k):
#         nfact *= n 
#         n -= 1
#         kfact *= k
#         k -= 1
#     return nfact // kfact

def divisors(number):
    count = 0 
    for i in range(1, number+1):
        if number % i == 0:
            count += 1
    return count 

with fileinput.input(files = ('divisors.in')) as f: 
    for line in f:
        n, m = [int(x) for x in line.split()]
        com = (math.factorial(n)) // (math.factorial(n-m) * math.factorial(m))
        div = divisors(com)
        print(div)

                                  