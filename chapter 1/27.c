#include<stdio.h>
#include<math.h>
int main() {
   
   // sum of all numbers from 5 to 50
     
     int sum=0;
    for(int i=5; i<=50;i++){
       sum= sum+i;
    }
    printf("%d",sum);

    return 0;
}