//keep taking num from user untill user enters multiple of 7
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    do{
        printf("Enter a number\n");
        scanf("%d",&n);
        if(n%7==0){
            break;
        }
        printf("%d\n",n);


    }while(1);
    printf("thankyou");
    return 0;
}