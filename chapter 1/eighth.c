#include<stdio.h>
#include<math.h>
int main() {
char ch;
printf("Enter a character: \n");
scanf("%c",&ch);

if(ch >='A' && ch <='Z')
{
    printf("uppercase \n");
}
else if(ch >= 'a' && ch <= 'z'){
    printf("lowercase \n");
}
else{
    printf("invalid entry");
}

   
  
return 0;
}
