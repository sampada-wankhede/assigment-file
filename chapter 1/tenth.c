#include<stdio.h>
#include<math.h>
int main() {
    int x,ans,a,b,c;
    printf("enter a three digit number:  ");
    scanf("%d",&x);
     printf(" enter num again: ");
     scanf("%d%d%d",&a,&b,&c);
     ans = ((a*a*a) + (b*b*b) + (c*c*c));
    
    if(x==ans){
        printf("  armstrong number \n");
    }
    else {
        printf("%d is not an armstrong number \n",x);
    }
    
    
    return 0;
}



