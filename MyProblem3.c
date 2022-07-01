//Programming II Assignment 03

#include <stdio.h>

int main()  {
  char userInput[80];
  printf("Who are you?\n");
  scanf("%s", userInput);

  if(userInput == "Bob")  {
    printf("Welcome to my world, %s", userInput);
  }
  else  {
    printf("Howdy stranger!");
  }
  return 0;
}
