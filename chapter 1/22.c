#include<stdio.h>
#include<math.h>
int main(){
    int n;
    
        printf("enter a number: ");
        scanf("%d",&n);
       do{

        if(n % 2 != 0){
            break;
        }

        printf("%d\n",n);
    }while(1);
    printf("thank you");
    return 0;
}