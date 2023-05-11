#include<stdio.h>
#include<math.h>

int factorial(int n);

int main(){
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
    return 0;

}

int factorial(int n){
     if(n==1){
        return 1;
     }

    int factorial1 =factorial(n-1);
    int totalfactorial=factorial1 *n;
    return totalfactorial;
}
