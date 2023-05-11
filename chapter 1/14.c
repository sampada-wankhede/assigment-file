#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    int i=-n;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}