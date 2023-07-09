#include<stdio.h>

int main(){
    int OPTION;
    printf("WHO IS THE PRIME MINISTER OF INDIA?\n");
    printf("CHOOSE THE CORRECT OPTION:\n1. RAHUL GANDHI\n2. NARENDRA MODI\n3. ATAL BIHARI\n4. RAM BIHARI PARSWAN\n");
    scanf(" %d ", &OPTION);

    if (OPTION == 2)
    {
        printf("correct answer");
    }
    else if ( OPTION == 1 || OPTION == 3 || OPTION == 4)
    {
        printf("wrong answer");
    }
    else
    {
        printf(" invalid option ");
    }
    
    return 0;

}