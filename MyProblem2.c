//Programming II Assignment 02

#include <stdio.h>

int main()  {
  char userInput[80];
  printf("Who are you?\n");
  scanf("%s", userInput);
  printf("Welcome to my world, %s", userInput);
  return 0;
}

//inquiry : i thought scanf("%s", &userInput);. no ampersand?
//          why the 80+1



/////////////////////////////////////////////////////////////////////////////
// My Answers:
// 1. char name[some_integer_length];
// 2. scnaf("%s", name);
// 3. printf("%s", name);
// 4. Because both print an identical message to the screen. The difference
//    is whether or not the output stream is explicitly or implicitly declared
/////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////
// Prof Answers:
// 1. the ENDL means "output end-of-line character"
//   printf("Who are you?\n");
//   printf("Who are you?");
//
// 2. char name[80+1];
//
// 3. scanf("%s",name); or gets(name); or fgets(name,80,stdin);
//
// 4. printf("%s",name);
//
// 5. printf() output stream implicitly defaults to stdout whereas
//    fprintf() stream os explicitly stdout
/////////////////////////////////////////////////////////////////////////////
