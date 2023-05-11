#include<stdio.h>
#include<math.h>

void table(int n);

int main() {
    int n;
    printf("Enter a number to print the table:\n");
    scanf("%d",&n);
       table(n);
    return 0;
}

void table(int n){
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",n,i,n*i);
    }
}