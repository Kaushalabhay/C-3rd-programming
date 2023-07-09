#include<stdio.h>

int main(){
    int i , sum ;
    printf("SUM OF FIRST 10 NATURAL NUMBER :  ");

    for( i = 0 ; i <= 10 ; i++ ){
        sum = sum + i;
        printf("%d\n", i );
    }
    printf("THE SUM OF FIRST 10 NATURAL NUMBER IS: %d", sum);
    
    }