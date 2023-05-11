//write function to calculate area of square, circle , rectangle
#include<stdio.h>
#include<math.h>
float squareA(float side);
float circleA(float radius);
float rectangleA(float l,float b);

float main() {
  float side,radius,l,b;
    printf("Enter the side of a square:\n");
    scanf("%f",&side);
    
float ans1 = squareA(side);
printf("area of square =%f \n",ans1);
     
    printf("Enter the radius of a circle:\n");
    scanf("%f",&radius);
printf("area of circlr = %f\n",circleA(radius));

    printf("Enter the length and breath of a rectangle:\n");
    scanf("%f%f",&l,&b);

float ans3= rectangleA(l,b);
printf("area of rectangle =%f \n",ans3);

 return 0;
}
float squareA(float side){
    return side*side;
}
float circleA(float radius){
    return 3.14*radius*radius;
}
float rectangleA(float l,float b){
    return l*b;
}


