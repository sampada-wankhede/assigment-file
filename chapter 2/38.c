#include<stdio.h>
#include<math.h>
int calPercentage(int science,int maths,int sankrit);

int main(){
    int science,maths,sankrit;
    printf("Enter marks of science, maths , sankrit\t:");
    scanf("%d%d%d",&science,&maths,&sankrit);

    printf("Percentage is %d",calPercentage(science,maths,sankrit));
    return 0;
}

int calPercentage(int science,int maths,int sankrit){
    int totalpercentage =((science+maths+sankrit)/3);
    return totalpercentage;
}