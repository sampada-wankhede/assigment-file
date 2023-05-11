#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    int sum=0;
    for(int i=n;i>=1;i--){
        sum=sum+i;
        
        printf("%d\n",i);
    }
    printf("%d\n",sum);
    return 0;
}