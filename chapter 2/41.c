// Pointer 
#include<stdio.h>
#include<math.h>
int main() {
    int age =23;
    int *ptr=&age;
    int _age=*ptr;


    printf("%d",_age);
    return 0;
}