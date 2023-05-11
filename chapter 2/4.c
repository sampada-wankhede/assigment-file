#include<stdio.h>
#include<math.h>
int main() {
    int x;
    printf("enter the marks");
    scanf("%d",&x);

    if(x>80 && x<=100) {
        printf("A+");
    }

    else if(x>=70 && x<=80) {
        printf("A");
    }

    else if(x>=50 && x<70) {
        printf("B");
    } 

    else if(x>=40 && x<50){ 
        printf("C");
    } 
    
    else{
        printf("FAIL");
    }
    return 0;
}