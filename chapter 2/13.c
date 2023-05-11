//print table of a number given by user
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);

    int i=1;
    while(i<=10){
        printf("%dx %d =%d \n",n,i,n*i);
        i++;
    }
    return 0;
}