#include<stdio.h>

struct vector
{
    int x;
    int y;
};

void calculatevector(struct vector v1 , struct vector v2 , struct vector sum);

void main()
{
    struct vector v1 = {5 , 10};
    struct vector v2 = {50 , 34};
    struct vector sum = {0};

    calculatevector(v1 , v2 , sum);

}

void calculatevector(struct vector v1 , struct vector v2 , struct vector sum){
    sum.x = v1.x + v2.x ;
    sum.y = v1.y + v2.y ; 

    printf("sum of x : %d\n",sum.x);
    printf("sum of y : %d\n",sum.y);



}
