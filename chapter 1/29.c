#include<stdio.h>
#include<math.h>
// print all no. from 1 to 10 except 6
int main() {
    for(int i=1; i<=10; i++){
        if(i==6){
            continue;
        }

        printf("%d \n",i);
    }
   return 0;
}