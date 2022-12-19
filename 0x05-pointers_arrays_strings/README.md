0x05. C - Pointers, arrays and strings
C
 By: Julien Barbier
 Weight: 1
 Project will start Dec 19, 2022 6:00 AM, must end by Dec 20, 2022 6:00 AM
 was released at Dec 19, 2022 6:00 AM
 An auto review will be launched at the deadline
Concepts
For this project, we expect you to look at these concepts:

Pointers and arrays
Data Structures


Resources
Read or watch:

C - Arrays
C - Pointers
C - Strings
Memory Layout
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are pointers and how to use them
What are arrays and how to use them
What are the differences between pointers and arrays
How to use strings and how to manipulate them
Scope of variables
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
More Info
You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, malloc and free - yet.

Quiz questions
Great! You've completed the quiz successfully! Keep going! (Hide quiz)
Question #0
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

*p = 402;

402


98


99


0

Question #1
What happens when one tries to access an illegal memory location?


There’s a chance for the computer to catch fire, and sometimes even explode


Segmentation fault


The computer shuts down


The operation is ignored

Question #2
Is it possible to declare a pointer to a pointer?


No


It depends on the type the pointer is pointing to


Yes

Question #3
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

p = 402;

402


98


99


0

Question #4
We declare the following variable

int arr[5];
What is the size in memory of the variable arr?


20 bytes


10 bytes


8 bytes


4 bytes


5 bytes


32 bytes

Question #5
What is the size of a pointer to an int (on a 64-bit architecture)


8 bytes


2 bytes


4 bytes


1 byte

Question #6
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

*p++;

402


98


99


0

Question #7
The process of getting the value that is stored in the memory location pointed to by a pointer is called:


Casting


Accessing


Dereferencing


Pointing

Question #8
If we have a variable called var of type int, how can we get its address in memory?


*(var)


&var


*var

Question #9
What is the value of n after the following code is executed?

int n = 98;
int *p = &n;

402


98


99


0

Question #10
What is the size of a pointer to a char (on a 64-bit architecture)


8 bytes


2 bytes


4 bytes


1 byte

Question #11
What is the identifier to print an address with printf?


%x


%d


%p


%a

Question #12
We declare the following variable

int arr[5];
What is the equivalent of typing arr[2]?


*arr + 2


*(arr + 2)


arr + 2
