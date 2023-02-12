### **Preactice set solutions**
## Just try it on your own, insted of copping the codes.

#### Program to print numbers from 0-10.

```c
#include<stdio.h>
#include<conio.h>
int main (){
    for(int i=0; i<=11; i=i+1){
        printf("%d\n", i);
    }
    return 0;
}
```

#### Program to print the sun of n natural numbers. Also, print them in inverse.

```c
# include<stdio.h>
# include<conio.h>
int main (){
    int num, solvn=0;
    printf("Enter a number:");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        solvn= solvn + i;
    }
    printf("Sum of first %d natural numbers are %d\n", num, solvn);

    for(int i=num; i>=1; i--){
        printf("%d\n",i);
        if(i==1){
            printf("Sucessfully printed loop from %d to 0.", num);
        }
    }
    return 0;
}
```
