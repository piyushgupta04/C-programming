# Loops Revision
## for loop 

### 1. Program to print Hello World for 5 times.

```c
#include<stdio.h>
#include<conio.h>
int main() {
    for( int i=1; i<=5; i=i+1 /*also written as i++ /*(Increment operator)*/){
        printf("Hello World\n");
    }
    return 0;
}
```

### 2. Program to print numbers from 0-100.

```c
#include<stdio.h>
#include<conio.h>
int main (){
    for(int i=1; i<=100; i=i+1){
        printf("%d\n", i);
    }
    return 0;
}
```

### 3. Program to print numbers from 10-0.

```c
#include <stdio.h>
#include <conio.h>
int main (){
    for(int i=10; i>=1; i=i-1){
        printf("%d\n", i);
    }
    return 0;
}
```

### 4. Program to print numbers from 0-10.
[`Solution Here`](https://github.com/piyushgupta04/C-programming/blob/main/Practice_sets.md#program-to-print-numbers-from-0-10)

### 5. Program to print numbers from 0-10 in float using for loop.
```c
# include<stdio.h>
# include<conio.h>
int main(){
    float i=1.0;
    for(i; i<=10.0; i++/*same as i=i+1*/){
        printf("%f\n", i);
    }
    return 0;
}
```

### 6. Program to print characters from a to z using for loop.
```c
# include<stdio.h>
# include<conio.h>
int main (){
    char alphy; /* here, I used Alphy inted of i */
    for(alphy='a'; alphy<='z'; alphy++){
        printf("%c\n", alphy);
    }
    return 0;
}
```



<!-- > `*last updated on 31th January 2023*` -->
