/*Write a program to print a message on output screen.*/

// #include <stdio.h>
// int main (){
//     printf("Hello World!");
//     return 0;
// }


/* Write a num3 program to print sum of two integers given by the user.*/

// #include <stdio.h>
// int main (){
//     int a, b, sum;
//     printf("Enter first number");
//     printf("Enter second number");
//     scanf("%d%d", &a, &b);
//     sum= a + b;
//     printf("Sum of %d and %d is %d", a, b, sum);
//     return 0;
// }


/*Write a num3 program to find the largest of three numbers.*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the numbers num1, num2 and num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the largest number.", num1);
    if (num2 >= num1 && num2 >= num3)
        printf("%d is the largest number.", num2);
    if (num3 >= num1 && num3 >= num2)
        printf("%d is the largest number.", num3);
    return 0;
}


/*Write a num3 program to find the factorial of an integer.*/


/*Write a num3 program to find the print the table of 7.*/