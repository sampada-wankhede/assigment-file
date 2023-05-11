#include<stdio.h>
#include<math.h>

void square(int n);
void _square(int *n);

int main(){
    int n;
    printf("enter a number=");
    scanf("%d",&n);
    square(n);
     printf(" number=%d\n",n);
     _square(&n);
     printf(" number=%d\n",n);

     return 0;
}
//call by value
void square(int n){
    n = n*n;
    printf("square =%d\n",n);
}

// call by refrence
void _square(int *n){
    *n=(*n) * (*n);
    printf("square =%d\n",*n);
}



