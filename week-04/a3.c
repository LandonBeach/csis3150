// Assignment 3 source code

#include <stdio.h>
#include <string.h>

struct Student
{
  char *firstName;
  char *lastName;
  char *major;
  char *email;
};

int main ()
{
  struct Student s;
  s.firstName = "Landon";
  s.lastName = "Beach";
  s.major = "Computer Science";
  s.email = "landont.beach@gmail.com";


  printf("The first name of s = %s\n", s.firstName);
  printf("The last name of s = %s\n", s.lastName);
  printf("The major of s = %s\n", s.major);
  printf("The e-mail address of s = %s\n", s.email);
}
