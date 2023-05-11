#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("enter the n \n");
    scanf("%d",&n);
           
    int sum =0;
    for(int i=1; i<=n;i++){
         sum= sum+i;
    }
    printf("%d",sum);

    for(int i=n; i>=1;i--){
        printf("%d \n",i);
    }
    return 0;
}