// Assignment 4 source code

#include <stdio.h>

int main()
{
  printf("This is your present working directory:\n");
  system("pwd");

  printf("This is a directory listing:\n");
  system("ls");

  printf("This is a detailed directory listing:\n");
  system("ls -l");

  printf("This is a calendar for October 2014:\n");
  system("cal October 2014");

  printf("This a calendar for October 2015: \n");
  system("cal October 2015");

  printf("The command \"cd ~\" changes the present working directory to home\n");
  system("cd ~");
  system("pwd");
}
