//fibonachhi sequence by recursion
#include<stdio.h>
#include<math.h>

int fib(int n);

int main(){
int n;
    printf("enter the number\t");
    scanf("%d",&n);

    printf("fabinacci of %d is %d\t",n,fib(n));

    return 0;
}
int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
      int fibN1=fib(n-1);
      int fibN2=fib(n-2);

    int fibN=fibN1+fibN2;
    return fibN ;
}

