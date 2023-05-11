
#include<stdio.h>
#include<math.h>

void doWork(int a,int b, int *sum,int *prod,int *avg);

int main (){
    int a,b,sum,prod,avg;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);

    doWork(a,b,&sum,&prod,&avg);
printf("sum=%d,product=%d,avarage=%d",sum,prod,avg);

return 0;
}
void doWork(int a,int b, int *sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}


