// print the range of prime number from 1 to n
#include<stdio.h>
#include<math.h>
int main () {
    int n,prime;
    printf("enter a number \n");
    scanf("%d",&n);
    
    
    for(int i=1;i<=n;i++){
      
      prime = 1;
        //count is refer by c
        for(int c=2;c<i;c++){
            if(i%c ==0){
                prime =0;
                break;
            }
       }

       if(prime){
        printf("%d \t",i);
       }
    
    }
        return 0;
        }
        

    
