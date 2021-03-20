M, m = input(), set(list(map(int, input().split())))
N, n = input(), set(list(map(int, input().split())))
s = sorted(list(m.difference(n))+list(n.difference(m)))
for i in s:
    print(i)
