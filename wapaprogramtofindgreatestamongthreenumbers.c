#include<stdio.h>

int main(){
    int a , b , c;
    printf("ENTER FIRST NUMBER: \n");
    scanf(" %d ", &a);
    printf("ENTER SECOND NUMBER: \n");
    scanf(" %d ", &b);
    printf("ENTER THIRD NUMBER: \n");
    scanf(" %d ", &c);

    if ( a>b && a>c)
    {
        printf(" %d IS THE GREATEST ",a);
    }
    else if( b>a && b>c) {
        printf(" %d IS THE GREATEST ",b);
    }
    else if( c>a && c>b)
    {
        printf(" %d IS THE GREATEST ",c);
    }else
    {
      printf(" ALL ARE EQUAL ");
    }
    
}