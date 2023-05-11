#include<stdio.h>
#include<math.h>

//check wether char is digit or not 

int main() {
    int ch;
    printf("enter a char\n");
    scanf("%d",&ch);

    printf("%d",ch>=0 && ch<=100);
    return 0;
}