//fibonacci sequence by itration
#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter the num of term");
scanf("%d",&n);
int a=0,b=1;

for(int i=1;i<=n;i++){
    printf("%d\t",a);
    int c=a+b;
    a=b;
    b=c;
}
return 0;
}