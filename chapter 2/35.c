#include<stdio.h>
#include<math.h>
int printsum(int n);

int main(){
int n;
printf("enter n");
scanf("%d",&n);

printf("sum is %d",printsum(n) );
return 0;

}

int printsum(int n){

    if (n==1){
        return 1;
    }

   int sum1=printsum(n-1); //sum of 1 to n-1
   int totalsum=sum1+n;
   return totalsum;
}