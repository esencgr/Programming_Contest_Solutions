if __name__ == '__main__':
    lst = list()
    command_lst = list()
    N = int(input())
    for i in range(0, N):
        command = input()
        command_lst = command.split()  
        print(command_lst)
        '''
        insert i e: Insert integer  at position .
        print: Print the list.
        remove e: Delete the first occurrence of integer .
        append e: Insert integer  at the end of the list.
        sort: Sort the list.
        pop: Pop the last element from the list.
        reverse: Reverse the list.
         '''
        # if command_lst[0] == "insert":
        #     lst.insert(int(command_lst[1]), int(command_lst[2]))
        
        # elif command_lst[0] == "print":
        #     print(lst)

        # elif command_lst[0] == "remove":
        #     lst.remove(int(command_lst[1]))       
        
        # elif command_lst[0] == "append":
        #     lst.append(int(command_lst[1]))       
        
        # elif command_lst[0] == "sort":
        #     lst.sort()

        # elif command_lst[0] == "pop":
        #     lst.pop()

        # elif command_lst[0] == "sort":
        #     lst.reverse()
