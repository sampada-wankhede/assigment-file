#include<stdio.h>
#include<math.h>

int main() {
    int a,b,min;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
     min=((a+b)+(a-b))/2;
     printf("smallest number is: %d",min);
     return 0;
}