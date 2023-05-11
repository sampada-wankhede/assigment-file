//print all english alphabates using pointer
#include<stdio.h>
#include<math.h>

int main () {
     char i='a',j='z',*ptr1=&i,*ptr2=&j;
    for(char k=i;k<=j;k++){
        printf("%c\n",k);

    }
 return 0;
}