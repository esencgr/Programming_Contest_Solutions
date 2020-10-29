# -*- coding: utf-8 -*-
import math 
a = float(input())
n = float(input())

r = (a / math.pi) ** 0.5
c = 2 * math.pi * r 

if n > c:
    print("Diablo is happy!")
else:
    print("Need more materials!")