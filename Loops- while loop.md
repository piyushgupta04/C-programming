#Loops Revision
## While loop

### Syntax for *While* loop-
```c
# include<stdio.h>
# include<conio.h>
int main (){
    int i= 1; /*Declaration statment*/
    while (i<5 /*Condition statment*/ )
    {
        printf("%d", i);
        i++; /*Updation statment*/
    }
  return 0;
}
```

### Print numbers from 1 to n entered by the user using while loop.

```c
#include<stdio.h>
#include<conio.h>
int main(){
    int i = 1;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Here is your series of numbers from 1 to %d\n", num);
    while(i<=num){
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```
