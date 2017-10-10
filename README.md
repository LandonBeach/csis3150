# C/C++ Programming (CSIS 3150)

## Week 1
1. Write a program that prints your name, major, year and academic interests.
1. Illustrate the following operators: Arithmetic operators: +, -, *, /, %; Relational operators: <, >, <=, >=, ==, !=; and Logical operators: &&, ||, and !. Note that C does not have a primitive Boolean type.
1. Use a for loop that computes and prints the powers of 2 from 2^1 to 2^20 (around a million):
1. Write code that uses a for loop and prints out a list of squares of n from n=1 to n=100, giving n and n^2 (ex. 3 -> 9).
1. Write a function that prints out if an integer is even or odd. Test it on 4 different integers.
1. Write and test a function that computes the distance between two points in 2D.
1. Write and test a function that computes n values of the sine function evenly spaced between 0 and 2Pi.
1. Write and test a function that simulates the rolling of two dice. It should take an integer n that determines how many times the dice are rolled then print a list showing the number of each possible outcome.


## Week 2
1. Write a program that, given positive integer n from the console, computes the first n fibonacci numbers (you probably don’t want a recursive algorithm).
1. Write a simple program that, given an integer n from the console, creates a pointer to n, then carefully explains (via printf statements) the difference between the pointer to n, the value of n, the & operator.
1. Finish exercise 2 by explaining what the * operator does.
1. Write a program that, given positive integer n from the console, passes the array [1,...,n] to a function which computes the square of each element and returns the result to the caller.
1. Illustrate call by reference versus call by value using a function other than the cube function shown in class.


## Week 3
1. Write a function which takes two integer arrays and returns “true” if the two arrays have exactly the same elements.
1. Write a word count macro.
1. Write a program that leaks a lot of memory. It should be printing out how much memory was used until it crashes. How much memory was used before it crashed?
1. Referring to the cplusplus documentation on the cmath library, test drive these functions: cos, exp, log, pow, sqrt, ceil, floor.


## Week 4
1. Referring to the cplusplus docs on the cstring library, write a test driver for the following string methods:
   - strcat, strcmp, strlen, strtok.
1. Write a program called “sum” that, when run from the command line sums all the numbers listed, ex., sum 1 2 3 4 would give 10. (Hint: use the command atoi.)
1. Create and test a Student struct. It should have first name, last name, major and email address.


## Week 5
1. Add these methods to the Complex structure: add, mult., divide.
1. Add code to the testppm program that automatically saves the image data to a file with a ppm extension.
1. Create two new different and interesting images.
1. Looking at the list of DOS commands, test 6 more commands executed within a C program.
1. Add code to the testppm program that automatically opens your image in gimp after it is created.


## Week 6
1. Add code to the Mandelbrot program that writes the data to a file with ppm extension.
1. Create 10 images: 5 zooming out and 5 zooming in, changing the scale a factor of 4 each time. Be sure to convert you ppm files to jpg or png.
1. Write a flex specification that takes a file (like awmt.txt) and trims all multiple space or tab characters but leaves single spaces and writes this to a new file.
1. Write a lex specification that reads an html file and strips all the tags and extra white space leaving only text and writes this to a file.


## Week 7
1. Improve the wc lex specification to do the following:
   - explain what the ouput means
   - handle errors such as a non-existing file
   - Creates an output file (typed in at the command line) with detailed info on the results of running this program.


## Week 8
1. Take one program from each of weeks 1 through 4 and mand.c from week 5 and turn them into C++ programs that compile under g++. For the Mandelbrot program, use the C++ <complex> library. Also use <iostream>.


## Week 10
1. Finish and test the code for the getters and setters of the ratio class.
1. Implement and test a Point class for 3-D points. It should store the x, y, z values of a point and have these methods:
   - negative(), norm() i.e. its distance to the origin, print().
1. Implement and test a circle class. It should store the x, y coordinates for the center and radius and have these methods:
   - area(), circumference(), getters and setters.


## Week 11
1. Using operator overloading, define and test the '-' and '/' operators to the ratio class.
1. Define and test the '<' and '>' operators of the ratio class.
1. Demo five methods of the algorithm class not given in class.
1. Use priority_queue to implement heapSort which sorts in the usual order. Create a simple data set with 10 words.
