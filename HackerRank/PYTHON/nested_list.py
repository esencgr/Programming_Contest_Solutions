def func(lst):
    mn = min(lst)
    for val in lst:
        if val > mn:
            return val

if __name__ == '__main__':

    py_students = list()
    lst = list()

    for _ in range(int(input())):
        student = list()    
        name = input()
        score = float(input())
        student.append(name)
        student.append(score)
        lst.append(score)
        py_students.append(student)
    
    lst.sort()
    # print(lst)
    # print(min(lst))

    value = func(lst)
    print(value)

    vals = list()
    for stu in py_students:
        if stu[1] == value:
            vals.append(stu[0])
    
    vals.sort()
    for i in vals:
        print(i)