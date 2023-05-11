//print the number from 0 to n , where n is given by the user , using while loop
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);

    int i=0;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    
    return 0;
}