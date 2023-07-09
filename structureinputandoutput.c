#include<stdio.h>
#include <string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.cgpa = 7.97;
    s1.roll = 01;
   //s1.name = "ABHAY";

    strcpy(s1.name,"ABHAY");

    printf("NAME IS :%s\n",s1.name);
    printf("THE ROLL NO. IS : %d\n",s1.roll);
    printf("THE CGPA IS : %f\n",s1.cgpa);

    return 0;

}