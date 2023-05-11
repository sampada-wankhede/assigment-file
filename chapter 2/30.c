#include<stdio.h>
#include<math.h>

void GST(float a);

int main() {
    float a;
    printf("enter cost \n");
    scanf("%f",&a);

    GST(a); //actual parameter or argument
    printf("%f\n",a); // here the value of a will be the value entered by user

    return 0;
}
void GST(float a){ //this float a is formal parameter here copy of actual parameter is passed
    float ans=a+(a*0.18);
    printf("cost+gst=%f\n",ans);
}