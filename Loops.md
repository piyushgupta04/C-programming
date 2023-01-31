# Loops Revision
## for loop 
### > Program to print Hello World for 5 times.

```
#include<stdio.h>
#include<conio.h>
int main() {
    for( int i=1; i<=5; i=i+1 /*also written as i++ /*(Increment operator)*/){
        printf("Hello World\n");
    }
    return 0;
}
```


### > Program to print numbers from 0-100.

```
#include<stdio.h>
#include<conio.h>
int main (){
    for(int i=1; i<=100; i=i+1){
        printf("%d\n", i);
    }
    return 0;
}
```
