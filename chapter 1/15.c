#include<stdio.h>
#include<math.h>
int main() {
    char ch;
    printf(" enter an alphabet \n");
    scanf("%c",&ch);
    
    for(char i= ch; i <= 'z'; i++ ){
        printf("%c \t",i);
    }
    return 0;

}