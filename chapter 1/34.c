# include <stdio.h>
#include <math.h>

float caltotalcost(float a);

int main(){
    float a;
    printf("enter the cost  ");
    scanf("%f",&a);


    caltotalcost(a);
    printf("total cost = %f \n",caltotalcost(a));


    return 0;
}

float caltotalcost(float a){

    return a + (a*0.18);
}