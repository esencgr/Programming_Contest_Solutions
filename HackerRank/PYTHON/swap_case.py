def swap_case(s):
    temp = list()
    st = ""
    for i in s:
        if i.islower():
            temp.append(i.upper())
        elif i.isupper():
            temp.append(i.lower())
        else:
            temp.append(i)
    
    return st.join(temp)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)