#include<stdio.h>
#include<math.h>
// find factorial of given number
int main() {
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1; i<=n;i++){
        fact = fact * i;
    }
    printf("factorial of %d is  %d",n,fact);
    return 0;
}