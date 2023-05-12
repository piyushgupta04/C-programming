
// # include <stdio.h>
// int main (){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     age <= 18 ? printf("\nSorry, Your not eligible!") : printf("\nYour Adult now!\nYou can vote!!!");
//     return 0;
// }

// Write a program to check if a student is passed or failed. marks<=30- failed, marks>30-passed.
// Using ternary operator
/*
# include <stdio.h>
int main (){
    int marks;
    printf("Dear Student,\nPlease enter your marks here: ");
    scanf("%d", &marks);
    marks <= 30 ? printf("Failed") : printf("Passed!");
    return 0; 
}
*/
// Using else if statment.
/*
# include <stdio.h>
int main (){
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if ( number <= 30){
        printf("Failed");
    }
    else if ( number > 30 && number <= 100 ){
        printf("Passed");
    }
    else if ( number > 100 ){
        printf("Wrong Marks");
    }
}
*/

/*
Write a program to give grades to a student
marks <= 30 C
30 < marks < 70 - B
70 < marks < 90 - A
90 <= marks <= 100 - A++ 
*/
// Using else if 

// Write a program to find if a letter entered by the user is upper case or lower case. 

// #include<stdio.h>
// int main (){
//     char letter;
//     printf("Enter the letter here: ");
//     scanf("%c", &letter);
//     if (letter >= 'a' && letter <= 'z'){
//         printf("%c is Lower case letter.", letter);
//     } 
//     else if (letter >= 'A' && letter <= 'Z'){
//         printf("%c is Upper case letter.", letter);
//     } else {
//         printf("Not a Letter.");
//     }
//     return 0;
// }





















