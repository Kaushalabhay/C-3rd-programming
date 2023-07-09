#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int age;
    float weight;
};

int main(){
    struct student s1;
    strcpy(s1.name,"ABHAY");
    s1.age;
    s1.weight = 68.5;

    printf("NAME = %s\n",s1.name);
    printf("WEIGHT in kg = %f\n",s1.weight);
    printf("AGE = %d\n\n\n",s1.age);


    struct student s2;
    strcpy(s2.name,"MANYA");
    s2.age = 17;
    s2.weight = 10000;

    printf("NAME = %s\n",s2.name);
    printf("WEIGHT IN KG = %f\n",s2.weight);
    printf("AGE = %d\n\n\n",s2.age);


    struct student s3;
    strcpy(s3.name,"BABBYY ");
    s3.age = 0;
    s3.weight = 0.00;

    printf("NAME = %s\n",s3.name);
    printf("WEIGHT IN KG = %f\n",s3.weight);
    printf("AGE = %d\n\n\n",s3.age);

    return 0;
}