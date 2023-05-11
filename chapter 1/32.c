#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
    float side,rad,a,b;

    printf("enter side of square\n");
    scanf("%f",&side);
    printf("area of square is %f \n", squareArea(side));

    printf("enter radius of circle\n");
    scanf("%f",&rad);
    printf("area of rectangle is %f \n",circleArea(rad));

    printf("enter side a and b of rectangle\n");
    scanf("%f%f",&a,&b);
    printf("area of rectangle is %f \n",rectangleArea(a,b));

return 0;
}



float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}

