#include<stdio.h>
#include<math.h>
int main() {
    int x;
    printf("enter a number:  ");
    scanf("%d",&x);

    if(x >= 0){
        printf("Positive \n");
        if(x % 2 == 0){
            printf("%d is an even number \n",x);
        }
        else{
            printf("%d is an odd number",x);
        }
    }
    else{
        printf("Negative");
    }
    return 0;
}