#include<stdio.h>
#include<math.h>
int main() {
    int day;
    printf("enter a day(1 to 7) \n:  ");
    scanf("%d",&day);

    switch(day) {
        case 1: printf(" monday \n");
        break;
        case 2: printf(" tuesday \n");
        break;
        case 3: printf(" wednesday \n");
        break;
        case 4: printf("thursday \n");
        break;
        case 5: printf("friday \n");
        break;
        case 6: printf("saturday \n");
        break;
        case 7: printf("sunday \n");
        break;
        default: printf("Not a valid day \n");
    }
    printf("Thankyou");
    return 0;
}




    