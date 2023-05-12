// Write a program in C to convert temperature from Fahrenhit to Celsius.
// # include<stdio.h>
// # include<conio.h>
// #include<math.h>

// int main(){
//     int temp,F,c;
//     printf("Enter temperature (in Fahrenhit) : ");
//     scanf("%d", &F);
//     c = (F-32)/ 1.8; /* Formula */
//     printf("%dC (celsius)", c);
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main(){
//     int num,table=1,i=1;
// //     printf ("Enter a number: ");
// //     scanf ("%d",&num);
// //     while (i<=10){
// //         table=num*i;
// //         printf ("%d x %d = %d\n",num,i,table);
// //         i++;
// //         }
// //     getch ();
// //     return 0;
// //     }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int ch;
//     printf ("Available Courses in Sherwood are-\na) BCA\nb) MCA\nc) B. Com\nd) BBA\nEnter your Choice: ");
//     scanf ("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//     printf ("Welcome BCA Students\n");
//         break;
//     case 2:
//     printf ("Welcome BBA Students\n");
//         break;
//     case 3:
//     printf ("Welcome B.Com Students\n");
//         break;
//     case 4:
//     printf ("Welcome MBA Students\n");
//         break;
//     default:
//     printf ("Invalic choice\n");
//         break;
//     }
//     getch ();
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main(){
//     int i,j,n;
//     printf("enter range");
//     scanf("%d", &n);
//     for(i = 1; i<= n; i++){
//         for(j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i, fact = 1;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     printf("Factorial of %d = %d", n, fact);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char num[20];
//     int i, len, flag = 0;
//     printf("Enter a number: ");
//     scanf("%s", num);
//     len = strlen(num);
//     for (i = 0; i < len; i++) {
//         if (num[i] != num[len - i - 1]) {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0) {
//         printf("The number is a palindrome.");
//     } else {
//         printf("The number is not a palindrome.");
//     }
//     return 0;
// // }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, originalNum, remainder, n = 0, result = 0;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0) {
//         originalNum /= 10;
//         n++;
//     }
//     originalNum = num;
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }
//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, n, a = 0, b = 1, c;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci series: %d %d ", a, b);
//     for (i = 2; i < n; i++) {
//         c = a + b;
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int binary, decimal = 0, base = 1, rem;
//     printf("Enter a binary number: ");
//     scanf("%d", &binary);
//     while (binary > 0) {
//         rem = binary % 10;
//         decimal = decimal + rem * base;
//         base = base * 2;
//         binary = binary / 10;
//     }
//     printf("Decimal equivalent is: %d\n", decimal);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n, i, sum = 0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: \n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     printf("The sum of the elements is: %d\n", sum);
//     return 0;
// }


// # include <stdio.h>
// # include <conio.h>
// int main (){
//     int choice;
//     printf("Welcome ...\nSelect your choice:\n[1] Burger\n[2] Pizza\n[3] Doritoz\n[4] Nothing\n=>Enter your choice: ");
//     scanf("%d", &choice);
//     switch(choice){

//         case 1:
//         printf("You have selected Burger\nPrice: $25\nEnjoy your meal ;)");
//         break;

//         case 2:
//         printf("You have selected Pizza\nPrice: $45\nEnjoy your meal ;)");
//         break;

//         case 3:
//         printf("You have selected Doritoz\nPrice: $55\nEnjoy your meal ;)");
//         break;

//         case 4: 
//         printf("Ok ... :(");
//         break;

//         default:
//         printf("Invalid Choice\t Try again!");
//         break;
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <conio.h>
// int main (){
//     int area, r, pi= 22/7;
//     printf("Enter radius of Cicle (in cm): ");
//     scanf("%d", &r);
//     area= pi* r* r;
//     printf("Area of a circle whose radius is %dcm is : %dcm^2", r, area);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// /*2. WAP that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate of Interest and Time are entered through the keyboard.*/
// void main() 
// {
// 	float p, r, t, a, si, ci;
// 	printf("Enter Principle: ");
// 	scanf("%f",&p);
// 	printf("Enter Rate: ");
// 	scanf("%f",&r);
// 	printf("Enter Time: ");
// 	scanf("%f",&t);
	
// 	si=(p*r*t)/100;
	
// 	printf("Simple Interest: %f",si);
// 	a = p*(pow((1 + r / 100), t));
// 	ci =  a - p;
// 	printf("\nCompound Interest: %f",ci);
//     return 0;	
// }

// #include<stdio.h>
// #include<conio.h>
// /*5. WAP that swaps values of two variables using a third variable.  */
// void main()
// {
// 	int  a,b,temp;
// 	printf("Enter a=");
// 	scanf("%d",&a);
// 	printf("Enter b=");
// 	scanf("%d",&b);
	
// 	temp=a;
// 	a=b;
// 	b=temp;
// 	printf("\nAfter swapping");
// 	printf("\na=%d",a);
// 	printf("\nb=%d",b);
//     getch();
// }

// #include<stdio.h>
// /*9. WAP that tells whether a given year is a leap year or not.  */
// void main()
// {
// 	int  year;
// 	printf("Enter Year=");
// 	scanf("%d",&year);
	
// 	if((year%4==0||year%400==0)&&year%100!=0)
// 	{
// 		printf("\nYear is leap year.");
// 	}
// 	else
// 	{
// 		printf("\nYear is not leap year.");
// 	}
// }

// #include <stdio.h>
// int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//       for (j = 1; j <= i; ++j) {
//          printf("* ");
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>
// int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//       for (j = 1; j <= i; ++j) {
//          printf("%d ", j);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// #include <stdio.h>

// int main() {
//    int low, high, i, flag;
//    printf("Enter two numbers(intervals): ");
//    scanf("%d %d", &low, &high);
//    printf("Prime numbers between %d and %d are: ", low, high);

//    // iteration until low is not equal to high
//    while (low < high) {
//       flag = 0;

//       // ignore numbers less than 2
//       if (low <= 1) {
//          ++low;
//          continue;
//       }

//       // if low is a non-prime number, flag will be 1
//       for (i = 2; i <= low / 2; ++i) {

//          if (low % i == 0) {
//             flag = 1;
//             break;
//          }
//       }

//       if (flag == 0)
//          printf("%d ", low);

//       // to check prime for the next number
//       // increase low by 1
//       ++low;
//    }

//    return 0;
// }

// #include <stdio.h>
// int main() {
// //     char c;
// //     int lowercase_vowel, uppercase_vowel;
// //     printf("Enter an alphabet: ");
// //     scanf("%c", &c);

// //     lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

// //     uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

// //     if (lowercase_vowel || uppercase_vowel)
// //         printf("%c is a vowel.", c);
// //     else
// //         printf("%c is a consonant.", c);
// //     return 0;
// // }

// #include <stdio.h>
// int main() {
//    int i, j;
//    char input, alphabet = 'A';
//    printf("Enter an uppercase character you want to print in the last row: ");
//    scanf("%c", &input);
// //    for (i = 1; i <= (input - 'A' + 1); ++i) {
// //       for (j = 1; j <= i; ++j) {
// //          printf("%c ", alphabet);
// //       }
// //       ++alphabet;
// //       printf("\n");
// //    }
// //    return 0;
// // }

// #include <stdio.h>
// int main() {
//    int i, space, rows, k = 0, count = 0, count1 = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//       for (space = 1; space <= rows - i; ++space) {
//          printf("  ");
//          ++count;
//       }
//       while (k != 2 * i - 1) {
//          if (count <= rows - 1) {
//             printf("%d ", i + k);
//             ++count;
//          } else {
//             ++count1;
//             printf("%d ", (i + k - 2 * count1));
//          }
//          ++k;
//       }
//       count1 = count = k = 0;
//       printf("\n");
//    }
//    return 0;
// // }

// #include <stdio.h>

// int main() {

//   char op;
//   double first, second;
//   printf("Enter an operator (+, -, *, /): ");
//   scanf("%c", &op);
//   printf("Enter two operands: ");
//   scanf("%lf %lf", &first, &second);

//   switch (op) {
//     case '+':
//       printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
//       break;
//     case '-':
//       printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
//       break;
//     case '*':
//       printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
//       break;
//     case '/':
//       printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
//       break;
// //     default:
// //       printf("Error! operator is not correct");
// //   }

// //   return 0;
// // }

// #include<stdio.h>

// int main()
// {
//     int number_of_days, years, months, days;

// //     printf("Enter number of days: ");
// //     scanf("%d", &number_of_days);

// //     years = number_of_days / 365;

// //     months = (number_of_days - years *365) / 30;

// //     days = (number_of_days - years * 365 - months*30);

// //     printf("Years = %d", years);
// //     printf("\nMonths = %d", months);
// //     printf("\nDays = %d", days);

// //     return 0;
// // }

// #include<stdio.h>

// void triangle(int );
// void pole(int);

// int main()
// {
//     int n;

//     printf("Enter number of lines of each section: ");
//     scanf("%d", &n);

//     printf("\n*** CHRISTMAS TREE ***\n\n");
//     triangle(n);
//     triangle(n);
//     pole(n);

//     return 0;
// }

// void triangle(int n)
// {
//     int i,j;
//     for(i=1; i<=n; i++)
//     {
//         for(j=1;j<=n-i; j++)
//         {
//             printf(" ");
//         }
//         for(j=1; j<=2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// void pole(int n)
// {
//     int i,j;
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=n-2; j++)
//         {
//             printf(" ");
//         }
//         printf("***\n");
//     }
// }

// Assignment 1
// //  Q6. Write a program to find the maximum and minimum of three numbers.
// #include <stdio.h>
// void findMaxMin(int a, int b, int c)
// {
//     int max = a;
//     int min = a;
//     if (b > max) max = b;
//     if (c > max) max = c;
//     if (b < min) min = b;
//     if (c < min) min = c;
//     printf("Max: %d\nMin: %d\n", max, min);
// }
// int main()
// {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     findMaxMin(a, b, c);
//     return 0;
// }

// / Assignment 1
// Q3. If a three-digit integer is input through keyboard,
// // write a program to print the sum of its digits.
// // (Hint: Use the modulus operator to get the remainder of the division of the number by 10.)
// #include <stdio.h>
// void sumOfDigits(int n)
// {
//     int sum = 0;
//     while (n != 0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     printf("Sum of digits: %d\n", sum);
// }
// int main()
// {
//     int n;
//     printf("Enter a three-digit number:\n");
//     scanf("%d", &n);
//     sumOfDigits(n);
//     return 0;
// }
// #include <stdio.h>
// #include<conio.h>
// void main(){
//     printf("Hello World");
//     getch;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int age;
//   printf("Enter your age: ");
//   scanf("%d", &age);
//   if (age >= 18) {
//     printf("You are eligible to vote");
//   } else {
//     printf("You are not eligible to vote");
//   }

//   return 0;
// }

// Program to calculate the sum of first n natural numbers
// // Positive integers 1,2,3...n are known as natural numbers

// #include <stdio.h>
// int main()
// {
//     int num, count, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     // for loop terminates when num is less than count
//     for(count = 1; count <= num; ++count)
//     {
//         sum += count;
//     }

//     printf("Sum = %d", sum);

//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int i;  //for outer loop counter
//     int j;  //for inner loop counter
//     for( i=1; i<=5; i++)
//     {
//         for( j=1; j<=10; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
// //     }
 
// //     return 0;
// // }



// #include <stdio.h>
// int main()
// {
//     int array[100], search, c, number;
//     printf("Enter the number of elements in array\n");
//     scanf("%d",&number);
//     printf("Enter %d numbers\n", number);
//     for ( c = 0 ; c < number ; c++ )
//         scanf("%d",&array[c]);
//     printf("Enter the number to search\n");
//     scanf("%d",&search);
//     for ( c = 0 ; c < number ; c++ )
//     {
//         if ( array[c] == search )   /* if required element found */
// //         {
// //             printf("%d is present at location %d.\n", search, c+1);
// //             break;
// //         }
// //     }
// //     if ( c == number )
// //         printf("%d is not present in array.\n", search);
// //     return 0;
// // }


// #include <stdio.h>
// struct student
// {
//     char name[50];
//     int roll;
//     float marks;
// };
// int main()
// {
//     struct student s;
    
//  printf("Enter The Information of Students :\n\n");
    
//  printf("Enter Name : ");
//     scanf("%s",s.name);
    
//  printf("Enter Roll No. : ");
//     scanf("%d",&s.roll);
    
//     printf("Enter marks : ");
//     scanf("%f",&s.marks);
    
//     printf("\nDisplaying Information\n");
    
//  printf("Name: %s\n",s.name);
//     printf("Roll: %d\n",s.roll);
//     printf("Marks: %.2f\n",s.marks);
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//    int monno;
//    printf("Input Month No : ");
//    scanf("%d",&monno);
//    switch(monno)
//    {
// 	case 1:
// 	       printf("January\n");
// 	       break;
// 	case 2:
// 	       printf("February\n");
// 	       break;
// 	case 3:
// 	       printf("March\n");
// 	       break;
// 	case 4:
// 	       printf("April\n");
// 	       break;
// 	case 5:
// 	       printf("May\n");
// 	       break;
// 	case 6:
// 	       printf("June\n");
// 	       break;
// 	case 7:
// 	       printf("July\n");
// 	       break;
// 	case 8:
// 	       printf("August\n");
// 	       break;
// 	case 9:
// 	       printf("September\n");
// 	       break;
// 	case 10:
// 	       printf("October\n");
// 	       break;
// 	case 11:
// // 	       printf("November\n");
// // 	       break;
// // 	case 12:
// // 	       printf("December\n");
// // 	       break;
// // 	default:
// // 	       printf("invalid Month number. \nPlease try again ....\n");
// // 	       break;
// //       }
// // }
// #include <stdio.h> 
   
// int main() {  
//     int day;   
  
//     printf("Enter Day Number\n");  
//     scanf("%d", &day);  
 
//     /* Input Validation */
//     if(day < 1 || day > 7){
//      printf("Invalid Input !!!!\n");
//      return 0;
//     }
  
//     if(day == 1) {  
//         printf("Monday\n");  
//     } else if(day == 2) {  
//         printf("Tuesday\n");  
//     } else if (day == 3) {  
//         printf("Wednesday\n");  
//     } else if(day == 4) {  
//         printf("Thursday\n");  
//     } else if(day == 5) {  
//         printf("Friday\n");  
//     } else if(day == 6) {  
//         printf("Saturday\n");  
//     } else {  
//         printf("Sunday\n");  
//     }
   
//     return 0;  
// }

// #include<stdio.h>  
//  int main()    
// {    
// int n, reverse=0, rem;    
// printf("Enter a number: ");    
//   scanf("%d", &n);    
//   while(n!=0)    
//   {    
//      rem=n%10;    
//      reverse=reverse*10+rem;    
//      n/=10;    
//   }    
//   printf("Reversed Number: %d",reverse);    
// return 0;  
// }   

// #include <stdio.h>
// # include<conio.h>
// struct student
// {
//     char name[50];
//     int roll;
//     float marks;
// };
// int main()
// {
//     struct student s;
    
//  printf("Enter The Information of Students :\n\n");
    
//  printf("Enter Name : ");
//     scanf("%s",s.name);
    
//  printf("Enter Roll No. : ");
//     scanf("%d",&s.roll);
    
//     printf("Enter marks : ");
//     scanf("%f",&s.marks);
    
//     printf("\nDisplaying Information\n");
    
//  printf("Name: %s\n",s.name);
//     printf("Roll: %d\n",s.roll);
//     printf("Marks: %.2f\n",s.marks);
//     return 0;
// }


