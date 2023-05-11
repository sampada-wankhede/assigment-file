#include<stdio.h>
#include<math.h>
int main() {
    int age;
    printf("enter the age:  ");
    scanf("%d",&age);

    if(age > 18){
        printf("%d is considered as an adult \n",age);
        printf("%d is considered as a voter \n ",age);
    }
    else{
        printf("%d is not considered aas an adult \n",age);
    }
 
    printf("thankyou");
    return 0;
}