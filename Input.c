// This is the basics of user input in C Programming

// Compile with gcc -o input Input.c

#include <stdio.h>
int main()
{

    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);                // & gets the address of the variable
    printf("Integer = %d\n",testInteger);     // Scanf waits for user input

    float num1;
    double num2;
    printf("Enter a number (float): ");
    scanf("%f", &num1);                       // Still using %f for floats
    printf("Float = %f\n", num1);
    printf("Enter another number (double): ");
    scanf("%lf", &num2);                      // Still using %lf for doubles
    printf("Double = %lf\n", num2);

    return 0;
}
