#include<stdio.h>
#include<math.h>

int main (){
    int a,b,*ptr1 = &a,*ptr2=&b;
    printf("Enter first num:");
    scanf("%d",&a);
    printf("Enter second num:");
    scanf("%d",&b);

    

    if(*ptr1 > *ptr2){
        printf("%d is maximum number\n",*ptr1);
    }
    else{
     printf("%d is maximum number\n",*ptr2);
    }
    return 0;
}