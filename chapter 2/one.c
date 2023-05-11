#include<stdio.h>
#include<math.h>
int main() {

    int a,b,min;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);

    min=(((a+b)+(a-b))/2);
    printf("%d is minimum",min);

    return 0;
}