// print the table of num n in reverse
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("enter a number:\t");
    scanf("%d",&n);

    int i =10;
    while(i>=1){
        printf("%dx%d=%d\n",n,i,n*i);
        i--;
    }
    return 0;
}