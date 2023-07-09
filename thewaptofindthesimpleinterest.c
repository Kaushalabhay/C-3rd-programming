#include<stdio.h>

int main(){
    float p , r , t;
    printf("\nEnter Principal(P) : ");
    scanf("%f",&p);

    printf("\nenter rate (R) : ");
    scanf("%f",&r);

    printf("\nENTER TIME IN YEARS (T) : ");
    scanf("%f", &t);

    printf("SI is (%f * %f * %f)/100 = %f",p,r,t,(p * r * t)/100);
        
    return 0;
}