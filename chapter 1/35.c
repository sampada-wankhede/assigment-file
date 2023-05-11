#include<stdio.h>
#include<math.h>
//whether the char is digit or not
int main() {
      int x,ans,a,b,c;
      printf("enter a three digit number\n");
      scanf("%d",&x);

      printf("enter the 1st digit again \n");
      scanf("%d",&a);

      printf("enter the 2nd digit \n");
      scanf("%d",&b);

      printf("enter 3rd digit");
      scanf("%d",&c);

      ans=((a*a*a)+(b*b*b)+(c*c*c));
      if(ans==x){
        printf("its an amstrong number");
      }

        else{
            printf("not an amstrong number");
        
        }
        return 0;
      }







  

