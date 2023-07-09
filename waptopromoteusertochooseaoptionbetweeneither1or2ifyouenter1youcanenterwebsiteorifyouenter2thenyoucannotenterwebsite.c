#include<stdio.h>

int main(){
    int n;
    printf("CHOOSE AN OPTION: \nPRESS 1 TO ENTER THE WEBSITE\nPRESS 2 TO NOT ENTER THE WEBSITE\nENTER YOUR CHOICE: ");
    scanf(" %d ", &n);

    if( n==1 ){
        printf("YOU CAN ENTER WEBSITE");
    }
    else if ( n == 2)
    {
        printf("YOU CANNOT ENTER WEBSITE");
    }
    else
    {
        printf("YOU ENTERED A INVALID NUMBER");
    }
    

return 0;
}