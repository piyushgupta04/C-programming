// Write a program to print the average if 3 numbers
/*
# include <stdio.h>
int main (){
    int a,b,c,average;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2st number: ");
    scanf("%d", &b);
    printf("Enter 3st number: ");
    scanf("%d", &c);
    average = a*b*c;
    printf("The average of %d,%d and %d is %d", a,b,c,average);
    return 0;
}
*/
// -----------------------------------------------------------------------------------

// Write a program to check if the given character is digit or not ?
// # include<stdio.h>
// int main (){
//     int check;
//     printf("Enter a digit: ");
//     scanf("%d", &check);
//     printf("Output -> %d, If the output returns 1 hence it is a digit.", check > 0 && check < 9);
//     return 0;
// }

// Write a program to print the smallest number of two.

// #include <stdio.h>
// int main (){
//     int a,b;
//     printf("Enter 1st Number: ");
//     scanf("%d", &a);
//     printf("Enter 2nd Number: ");
//     scanf("%d", &b);
//     printf("Output-> %d\nIf, %d is greater then %d, it will return 0\nAnd if %d is less then %d, I will return 1", a>b,b,a,b,a);
//     return 0;
// }


// #include <stdio.h>

// int main() {

//   int num, i, flag = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d", &num);

//   if (num == 0 || num == 1)
//     flag = 1;

//   for (i = 2; i <= num / 2; ++i) {

//     if (num % i == 0) {
//       flag = 1;
//       break;
//     }
//   }

//   if (flag == 0)
//     printf("%d is a prime number.", num);
//   else
//     printf("%d is not a prime number.", num);

//   return 0;
// }




// Program to check if the user is greater then 18 and has pan card!
#include <stdio.h>
#include <conio.h>
int main (){
    int uz_age;
    printf("Welcome!\nPlease enter your age to continue\n=>");
    scanf("%d", &uz_age);
    printf("%d", uz_age);
    return 0;
}