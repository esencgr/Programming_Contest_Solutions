# https://open.kattis.com/problems/divideby100

def list_to_string(org_list, sep = ''):
    return sep.join(org_list)

def delete_zero(l):
    end = len(l)
    check1 = l[end-1] != "0" 
    check2 = l[end-1] != "."
    if check1 and check2:
        return l
    l.pop()
    return delete_zero(l)
    
n = input()
m = input()

length_n = len(n)
length_m = len(m)

lst_n = list(n)

lst = lst_n[::-1]
lst.insert(length_m-1, ".")
lst_n = lst[::-1]

# Convert list of strings to string
lst_str = list_to_string(lst_n)
print(lst_str)

print(len(lst_n))

res = delete_zero(lst_n)

# Convert list of strings to string
full_str = list_to_string(res)
print(full_str)