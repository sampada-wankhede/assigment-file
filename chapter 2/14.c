//keep taking number untill its odd num
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    do{
        printf("Enter a number \n");
        scanf("%d",&n);
        if(n%2 != 0) {
            break;
        }  
printf("%d\n",n);

    }while(1);
 
 printf("thankyou");

 return 0;

}
