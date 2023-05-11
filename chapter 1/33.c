#include <stdio.h>
#include <math.h>

int sum(int a, int b);

int main() {
    int a,b;
    printf("enter a and b ");
    scanf("%d%d",&a,&b);

    printf("sum of a and b =%d \n",sum(a,b));

    return 0;
}

int sum(int a ,int b){
    return a+b;
}