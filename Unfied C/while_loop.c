// Syntax

// # include<stdio.h>
// # include<conio.h>
// int main (){
//     int i= 1; /*declaration*/
//     while (i<5 /*condition*/ )
//     {
//         printf("%d", i);
//         i++; /*Updation*/
//     }
    
// }


// Increment & Decrement Operator.
/*
--i = Decrease then use.
i-- = Use the decrease.
i++ = Use, then increase.
++i = Increase then use.
*/

// print numbers from 1 to n entered by the user.
// /*
#include<stdio.h>
#include<conio.h>
int main(){
    int i = 1;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Here is your series of numbers from 1 to %d\n", num);
    // while(i<=num){
    //     printf("%d\n", i);
    //     i++;
    // }
    for(i; i<= num; i++){
        printf("%d\n", i);
    }

    return 0;
}
// */
