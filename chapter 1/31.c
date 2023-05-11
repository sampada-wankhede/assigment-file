#include<stdio.h>

void namaste();
void bonjour();

int main() {
    char ch;
    printf("enter 'i' for Indian and 'f' for French \n");
    scanf("%c",&ch);

    if(ch == 'i') {
        namaste();
    }

    else{
        bonjour();
    }

    return 0;

}

void namaste() {
    printf("namaste \n");

}

void bonjour() {
    printf("bonjour \n");
}