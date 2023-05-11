#include<stdio.h>
#include<math.h>
int main(){
    int i=101;
    int *ptr=&i;
    int **pptr=&ptr;

   printf("%d\n",i);
   printf("%u\n",ptr);
   printf("%d\n",pptr);

   return 0;
}