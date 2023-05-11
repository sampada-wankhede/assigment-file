//find factorial of a number
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("enter a number:\t");
    scanf("%d",&n);

     int fact=1;
    for(int i=n;i>=1;i--){
        fact =fact *i;
    }
        printf("factorial of %d is %d",n,fact);

    
    return 0;
}