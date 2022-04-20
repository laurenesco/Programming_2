//Program Name:           Problem1.cpp
//Date Created:           04/20/22
//Last Modified:          04/20/22
//Created By:             Lauren Escobedo
//Last Modified By:       Lauren Escobedo
//Program Description:    This is the C++ solution to problem 1 from the CS 1311 Review

#include <iostream>

using namespace std;

int main()  {
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    return 0;
}

//  1. The Problem (1) pseudocode specifies that the two PRINT-statements
//    and the STOP-statement are the entire body of the Problem (1) PROGRAM
//    module. Briefly explain how to code a PROGRAM module—that is, explain
//    how to implement a PROGRAM module—using the C programming language.
//
//     --   You may implement pseudocode as code using the C programming language
//          by going line by line and writing the appropriate code. Ex: the pseudocode
//          has two lines of print and then stops the program, so the code should
//          consist of two lines printing "Hello World!" and then ending the program.
//
//
//  1a. *FYI* printf is the name of a predefined function: What the f of
//      printf stand for? How many different ways can printf be spelled
//      correctly? What does the fact that printf is postfixed (suffixed)
//      by a pair of parentheses mean, that is, what is the semantics of
//      the parentheses-pair?
//
//     --   The 'f' in printf stands for formatted, because the function printf prints
//          formatted data. Printf can only be spelled correctly one way, since it is
//          a call to a specific funtion named printf(). The postfix of parenthesis mean
//          that this is a function, that is the parameter where the argument would go
//          if you were passing one.
//
//   2. Dr. Hanna copied the printf() function prototype (shown below) from
//      the C standard library header file named stdio.h description found at
//      http://www.cplusplus.com/reference/cstdio/printf/ on December 22, 2018.
//      What is (a) the meaning of the int-eger returned by a reference to printf();
//      (b) the meaning of the const char *format; and (c) the meaning of the
//      ellipses ... formal parameters?
//
//      int printf(const char *format,...);
//
//    --    the integer return type refers to the data that is returned by the function,
//          which in the case of printf, is the mumber of characters printed. Regarding
//          'const char *format', the const is a qualifier for the argument, saying that
//          the value of *format may not be changed. char is the data type of *format.
//          *format is the variable in the argument which, in this case, is a pointer called format.
//          The ... indicates the the function can take any number of arguments.
//
//  3.  (Continuing 2) A fuller description of how printf() works reads,
//      “Writes the C string pointed-to by format to the standard output device
//      (stdout). When format includes format specifiers (subsequences beginning
//      with a single %), the additional arguments following the argument format
//      are formatted and inserted in the resulting string replacing their respective
//      specifiers.” Make a list of format specifiers you should know how to use.
//      Hint See http://www.cplusplus.com/reference/cstdio/printf/ for help.
//
//    --    %d Integer
//          %2d/%.2d Formatted integer
//          %u Unsigned integer
//          %f Floating point
//          %x Hexadecimal
//          %c Character
//          %e Scientific notation
//
//   4. (Continuing 2) T or F? A reference to the printf() library function
//      requires a format string and at least one other piece of data that
//      “fills out” the ellipses.
//
//    --    F, it only requires the format string, format specifiers are optional
//          and only included if used.
//
//   5. Explain how the following code segment outputs the strings "Howdy World!\n"
//      to the standard output device. Hint See
//      https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm on
//       December 22, 2018 for help.
//
//          #define HOWDY1 "Howdy world!\n"
//          #define HOWDY2(name) "Howdy " #name "!\n"
//
//          printf(HOWDY1);
//          printf(HOWDY2(world));
//
//    --    The first printf uses the macro definition HOWDY1 which holds the value
//          "Howdy world!\n" as the parameter, printing this value. The second printf
//          uses HOWDY2(name) which we can see has a parameter which takes an argument
//          called name. It is then inserts the stringized version of what is passed
//          as name into the definition.
//
