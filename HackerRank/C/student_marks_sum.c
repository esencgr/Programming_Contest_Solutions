
//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    
    int sum = 0;
    for (int i = 0; i < number_of_students; i++) {
        if (gender == 'b')
            if (i % 2 == 0)
               sum += *(marks + i);
        if (gender == 'g')
            if (i % 2 == 1)
               sum += *(marks + i);    }
    return sum;