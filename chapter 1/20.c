#include<stdio.h>
#include<math.h>
// print the sum of the n natural number and also print them in reverse , case 3
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    int sum=0;
    for(int j=n; j>=1 ;j--){
        sum=sum+j;
        printf("%d \n",j);

    }
    printf("sum is %d \n",sum);

    return 0;
}