#include<stdio.h>

int main(){
    int option;
    printf("WHO IS THE PRIME MINISTER OF INDIA?\n");
    printf("CHOOSE THE CORRECT OPTION:\n1.vasu\n2.glory\n3.NARENDRA MODI\n4.peehu\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    printf("WRONG ANSWER");
        break;
    case 2:
        printf("WRONG ANSWER");
        break;
    case 3:
    printf("CORRECT ANSWER");
        break;
    case 4:
    printf("WRONG ANSWER");
        break;


    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;

}