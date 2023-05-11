#include<stdio.h>
#include<math.h>
int main() {
    int x,a,b,c,ans;

    printf("enter a three digit number\n");
    scanf("%d",&x);

    printf("enter the same number again\n");
    scanf("%d%d%d",&a,&b,&c);

    ans=((a*a*a)+(b*b*b)+(c*c*c));

    if(ans==x){
        printf("its an amstrong number\n");

    }
    else{
        printf("not an amstrong number");
    }
return 0;
}