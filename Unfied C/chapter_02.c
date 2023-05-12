// Conditional Statement

// # include <stdio.h>
// int main (){
//     int age;
//     printf("Enter ur age here -> ");
//     scanf("%d", &age);

//     if (age >= 18) {
//         printf("Congratulations!!!\nYou are eligible for the Scholarship ;)");
//     }
//     else {
//         printf("Sorry :(\nYou are not eligible");
//     }
// }

// if else and else if statement

// Practice

// # include<stdio.h>
// int main (){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if ( age >= 18 && age < 35 ){
//         printf("Adult");
//     }
//     else if ( 18 > age && 13 < age ){
//         printf("Teenager");
//     }
//     else if (age < 13) {
//         printf("Kiddo");
//     }
//     else {
//     printf("Seniour Citizen");
//     }
//     return 0;
// }

// Ternary 
/*
// Example
# include <stdio.h>
int main (){
    int digit;
    printf("Enter a Character: ");
    scanf("%d", &digit);
    digit < 9 && digit >= 0 ? printf("%d is a valid digit", digit) : printf("%d is not a digit", digit);
    return 0;
}
*/
// Switch 
# include <stdio.h>
int main (){
    char name;
    printf("Enter the 1st alphabet of your name: ");
    scanf("%c", &name);
    switch (name)
    {
    case 'p' :
        printf("Piyush");
        break;
    case 'f' :
        printf("Friend ... ;)");
        break;
    case 's' :
        printf("Coding");
        break;
    default :
        printf("Don't waste ur time");
        break;
    }
}

// Nested else if statement.
# include <stdio.h>
int main (){
    
}
