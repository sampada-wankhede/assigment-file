#include<stdio.h>
#include<math.h>
int main(){
    // print a table of number in reverse

    int n;
    printf("enter anumber ");
    scanf("%d",&n);

    for(int i=10; i>=1; i--){
        printf("%d \n",n*i);
    }
    return 0;
}