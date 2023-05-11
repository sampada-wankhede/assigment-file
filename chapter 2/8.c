//print o to n, where output n will be -ve,using while
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number \t");
    scanf("%d",&n);

    int i=0;
    while(i>=-n){
        printf("%d \n",i);
        i--;
    }
    return 0;
}