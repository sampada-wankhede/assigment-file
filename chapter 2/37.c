//convert temo from celcius to fahrenheit 
#include<stdio.h>
#include<math.h>

float converttemp(float celcius);
int main(){
    float celcius;
    printf("Enter tempreture in celcius:\t");
    scanf("%f",&celcius);
    printf("Temprature in fahrenheit is :%f\n",converttemp(celcius));
    return 0;
}

float converttemp(float celcius){
    float fara = celcius * (1.8) + 32;
    return fara;
}