//--------------------------------------------------------------
// Dr. Art Hanna
// Review Assignments, Problem #1
// Problem1.c
//--------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define HOWDY1 "Howdy world!\n"

#define HOWDY2(name) "Howdy " #name "!\n"

int main()
{
   printf("Howdy world!\n");
   fprintf(stdout,"Howdy world!\n");
   printf("Howdy"); printf(" "); printf("world!"); putchar('\n');
   printf(HOWDY1);
   printf(HOWDY2(world));
   
   system("PAUSE");
   return( 0 );
}
