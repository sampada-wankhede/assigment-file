#include<stdio.h>
#include<math.h>

float GST(float a);

int main(){
    float a;
    printf("enter the cost \n");
    scanf("%f",&a);

    float a= GST(a);
    printf("cost + gst =%f\n",a);
    printf("%f\n",a);

    return 0;
}
float GST(float a){
     return a+(a*0.18);
    
}