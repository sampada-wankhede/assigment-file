//write a function sum for addition of two number
#include<stdio.h>
#include<math.h>

int sum(int a, int b);

int main() {
    int a,b;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);

    int ans = sum(a,b);
    printf("Sum of a and b= %d \n",ans);
    return 0;
}
int sum(int a, int b){
    return a+b;
}