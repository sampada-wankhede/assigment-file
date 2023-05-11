#include<stdio.h>
#include<math.h>
int main() {
    int marks;
    printf("enter marks:  ");
    scanf("%d",&marks);

        if(marks >= 80 && marks <= 100){
          printf("pass with A+");
        }
        else if(marks >= 70 && marks < 80){
        printf("pass with A");
        }
        else if(marks >= 50 && marks < 70){
            printf("pass with B");
        }
        else if(marks >= 40 && marks < 50){
            printf("pass with C");
        }
        else if(marks >= 0 && marks < 40){
            printf("fail");
        }
        else{
            printf(" invalid input");
        }
        return 0;

    }
