#include<stdio.h>

void India();
void French();

int main(){
  char a;
  printf("Enter 'i' if you are Indian or enter 'f' if you are French :\t    ");
  scanf("%c",&a);
   
   if(a=='i'){
    India();
   }
   else{
    French();
   }
return 0;

}
void India(){
    printf("Namaste!!\n");
}
void French(){
    printf("Bonjour!!\n");
}