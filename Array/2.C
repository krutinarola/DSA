#include<stdio.h>
int main{
    int a = 10;
    printf("a : %d a : %d ",a,a++);
    printf("a : %d a : %d ",a,++a);
    printf("a : %d a : %d ",a++,a++);
    printf("a : %d a : %d ",a++,++a);
    printf("a : %d a : %d ",++a,++a);
    printf ("a : %d a : %d a : %d",a,a++, a++);
    printf ("a : %d a : %d a : %d",a,++a, a++);
    printf ("a : %d a : %d a : %d",a++ , ++a, a++);
    printf ("a : %d a : %d a : %d",a++ , ++a, ++a);
    printf ("a : %d a : %d a : %d",++a , ++a, ++a);
    printf ("a : %d a : %d a : %d",++a , ++a, a++);
    printf ("a : %d a : %d a : %d",a++ , ++a, a++);
    printf ("a : %d a : %d a : %d",++a , a++, ++a);
    printf("a: %d a: %d a: %d a: %d",a++,++a,a++,++a);

}
 /*
    two array merge 
    10 20 30 40 50 => 50 20 30 40 10
    10 20 30 40 50 => 20 30 40 50 10
 */ 

 