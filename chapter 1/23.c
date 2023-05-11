#include<stdio.h>
#include<math.h>
int main() {
    // keep taking input until user enters multiple of 7
    int n;
    do{
        printf("enter a number: ");
        scanf("%d",&n);
        printf("%d \n",n);

        if(n % 7 == 0){
            break;
        }
    }while(1);
    printf("thankyou");

    return 0;
}
