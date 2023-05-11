#include<stdio.h>
#include<math.h>
int main() {

    /*for(int i=50;i>=5; i--){
        if(i % 2 != 0){
            printf("%d \n",i);
        }
    }*/

    
    for(int i=5;i<=50;i++){
       /* if(i % 2 == 1){
            printf("%d \n",i);
        }*/
        
    

     if(i % 2 == 0){
        continue;
    }
    printf("%d \n",i);
    }
    
    return 0;
}