// program to print from -n to +n , where n is given by the user
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);

    int i=-n;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}