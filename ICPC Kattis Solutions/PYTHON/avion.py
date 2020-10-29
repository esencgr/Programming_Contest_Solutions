# -*- coding: utf-8 -*-
lst = list()

for i in range( 1, 6 ):
    code = input()
    if code.count("FBI"):
        lst.append(i)

if len(lst) == 0:
    print("HE GOT AWAY!")
else:
    for i in lst:
        print(i)