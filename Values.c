// This is the basics of numbers and other values in C Programming

// Compile with gcc -o values Values.c

#include <stdio.h>
int main()
{
    int testInteger = 5;                        // Name the type variableName and assign value
    printf("Integer = %d\n", testInteger);      // %d is an signed decimal integer

    float testFloat = 13.5;                     // Float has decimals
    printf("Float = %f\n", testFloat);          // Use %f for floats

    double testDouble = 12.4;                   // Doubles are floats with double precision 64 bit
    printf("Double = %lf\n", testDouble);       // Use lf for doubles

    char testChar = 'a';                        // Char is just one letter
    printf("Character = %c\n", testChar);       // Use %c

    char str[] = "This is a string";                  // Strings are arrays of chars
    char str2[15] = {'S','t','r','i','n','g','\0'};   // Can also be initialized like this
    printf("%s\n",str);                                 // Use %s
    printf("%s\n",str2);

    return 0;
}
