# OOPs

Lab 01

`Dated:4/8/21`

## Questions
1. WAP in C to store the author, title, and price of 10 books using structure and display the book details. ✅
2. WAP in C to define a structure to store the employee name, ID, DOB, and basic salary of an employee. Store the details of 10 employees. Display the employee information having the highest salary. Sort the employee details according to their salary. ✅

3. WAP in C++ to input name, roll number and marks in 5 subjects for n number of students. Write functions to:-
    * Find total marks and percentage of all n students. ✅
    * Display details of a student with a given roll number. ✅
    * Display the details for all the students having percentage in a given range. ✅
    * Sort the array in ascending order of marks. ✅

4. WAP in C++ to show the following two uses of scope resolution operator on variables.
    * To access the global and local variable ✅
    * To define a function outside the class ✅

5. WAP in C++ to input two integers and calculate their sum and average using classes. ✅

6. WAP in C++ to demonstrate the scope of a variable. ✅

7. WAP in C++ to create a class which stores the name, ID, age and basic salary of an employee. Input data for ‘n’ number of employees. Calculate the gross salary of all the employees and display it along with the other details in tabular form. ✅
```
    Gross Salary = Basic Salary + DA + HRA
    DA = 80% of Basic Salary
    HRA = 10% of Basic Salary
```
----------------------

## O/P

"""gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE."""

### Q 1

```
❯ gcc a1.c && ./a.out
enter the author..
a1 a1
enter the title..
t1 t1
enter the price..
238
enter the author..
a2 a2
enter the title..
t2 t2
enter the price..
454
enter the author..
a3 a3
enter the title..
t3 t3
enter the price..
675

1
        a1 a1
        t1 t1
        238
2
        a2 a2
        t2 t2
        454
3
        a3 a3
        t3 t3
        675
```

### Q 2

```
❯ gcc a2.c && ./a.out
enter name..
emp 01
enter id..
201039
enter dob in dd/mm/yy..
27/3/2001
enter base salary..
45000
enter name..
emp 93 
enter id..
345255
enter dob in dd/mm/yy..
30/1/1993
enter base salary..
60000
enter name..
emp 02
enter id..
544355
enter dob in dd/mm/yy..
15/4/1995
enter base salary..
100000

1
        name.. emp 02
        id.. 544355
        dob.. 15/4/1995
        base salary.. 100000
2
        name.. emp 93
        id.. 345255
        dob.. 30/1/1993
        base salary.. 60000
3
        name.. emp 01
        id.. 201039
        dob.. 27/3/2001
        base salary.. 45000
```

### Q 3

```
❯ g++ a3.cpp && ./a.out
3
enter details for student 1
s1 s1
24545
34 54 65 30 69
enter details for student 2
s2 s2
45636
65 56 24 80 90
enter details for student 3
s3 s3
55545
56 76 78 58 89

#Passed
Student 1
        Name: s1 s1
        Roll: 24545
        30 34 54 65 69 
        Total: 252
        Percent 50.4 %
#Passed
Student 2
        Name: s2 s2
        Roll: 45636
        24 56 65 80 90 
        Total: 315
        Percent 63 %
#Grade: E
Student 3
        Name: s3 s3
        Roll: 55545
        56 58 76 78 89 
        Total: 357
        Percent 71.4 %
```

### Q 4

```
❯ g++ a4.cpp && ./a.out
enter any string... hjbdchbjcb
The details..
curr id: 1
str entered: hjbdchbjcb

enter any string... svsvvs
The details..
curr id: 2
str entered: svsvvs
```

### Q 5

```
❯ g++ a5.cpp && ./a.out
the sum= 170
the average= 85
```

### Q 6

```
❯ g++ a6.cpp && ./a.out
Call number to the func(): 1
local: 45
the global variable: 45
Call number to the func(): 2
local: 45235
the global variable: 45235
Call number to the func(): 3
local: 2355
the global variable: 2355
Call number to the func(): 4
local: 3255
the global variable: 3255
the global variable: 3255
the local variable: 99999
```


### Q 7

```
❯ g++ a7.cpp && ./a.out
2
sdvsvs sfs
5435
23
4525
dcfdcdsv
2425
24
345443
        Name: sdvsvs sfs
        ID: 5435
        age: 23
        salary: 4525
        DA: 3620
        HRA: 452.5
        Gross Salary: 8597.5
        ~~~~~~~~~~~~~~~~~~
        Name: dcfdcdsv
        ID: 2425
        age: 24
        salary: 345443
        DA: 276354
        HRA: 34544.3
        Gross Salary: 656342
        ~~~~~~~~~~~~~~~~~~
```