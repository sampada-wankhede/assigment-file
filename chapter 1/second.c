#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,d,e;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    c= a-b;
    printf("c=%d",c);
    printf("enter d");
    scanf("%d",&d);
    e= pow(c,d);
    printf("e=%d",e);
    return 0;
}


