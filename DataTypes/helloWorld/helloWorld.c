/*
* Author: Ty Richardson
* Purpose: This program prints out "Hello, World!"
* Date: Sept 23, 2020
*/

// pre-processor directive, work occurs before compiler (then the linker)
    // .h defines a header file, in <> for standard one, in " " for homegrown
        // <name.h> vs "name.h" tells the compiler where to look for the header file
            // standard system directories vs current directory
                // libraries that provide functionality
                    // e.g., printf() is in stdio.h
#include <stdio.h>

// int states that the main function will return an integer
    // could be void, instead, meaning the main function has no return
        // below, main takes no arguments
            // can be written as main(void)
int main() 
{
    // printf() function displays the string inside the quotation marks
        // like console.log in Javascript
            // converts everything to text strings
    printf("Hello, World!");

    // main() returns the integer zero
    return 0;
}