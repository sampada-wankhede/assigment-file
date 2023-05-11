#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c,d;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    c =a-b;
    printf("c=%d",c);
    d=pow(c,2);
    printf("ans= %d",d);
    return 0;
}