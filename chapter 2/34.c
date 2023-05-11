//print HELLO WORLD by recursion
#include<stdio.h>
#include<math.h>

void HWorld(int count);
int main() {
    int count;
    printf("Enter the count\t");
    scanf("%d",&count);

    HWorld(count);
    return 0;
}
    //Recursive function

void HWorld(int count){
     if(count == 0){
        return;
     }

    printf("hello world\n");
    HWorld(count-1);
}