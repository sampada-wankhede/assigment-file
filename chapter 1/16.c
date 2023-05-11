#include<stdio.h>
#include<math.h>
int main() {
    char ch,cr;
    printf("enter the first alphabet and the second alphabet you want in accending series:   \n");
    scanf("%c%c",&ch,&cr);

    for(char i=ch;i<= cr;i++){
     printf("%c \n",i);
    }

   return 0; 
}