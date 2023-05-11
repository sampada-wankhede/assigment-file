#include<stdio.h>
#include<math.h>
int main() {
    int a;
    printf("enter the number:  ");
    scanf("%d",&a);
    
    a>=1?printf("%d is a natural number",a):printf("%d is not a natural number",a);
    
    return 0;
}