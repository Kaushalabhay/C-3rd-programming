#include<stdio.h>

int main(){
    int n ;
    printf("the table of : ");
    scanf("%d", &n);

    int i;
    for( i=0 ; i <= 10 ; i++ );
    printf(" %d * %d\n",i,n,i*n);
    return 0;
}