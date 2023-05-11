#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    do{
        sum= sum + i;
        i++;
        
    }while(i<=n);

    printf("%d\n",sum);

    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;

}