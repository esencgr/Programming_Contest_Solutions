from collections import deque

def getMax(operations):
    stack = deque()
    mx = [-99]

    for i in operations:
        args = list(map(int, i.strip().split()))
        # print(args)
        
        if args[0] == 1:
            if (args[1] >= mx[len(mx) - 1]):
                mx.append(args[1])
            stack.append(args[1])
        
        if args[0] == 2:
            peek = stack.pop()
            if (peek == mx[len(mx) - 1]):
                mx.pop()
        
        if args[0] == 3:
            print(mx[len(mx) - 1])

if __name__ == "__main__":
    operations = ['1 97', '2', '1 20', '2', '1 26', '1 20', '2', '3', '1 91', '3']
    res = getMax(operations)
