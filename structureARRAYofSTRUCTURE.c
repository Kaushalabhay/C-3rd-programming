#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int age;
    float weight;
};

int main()
{
    struct student ECE [100];
    struct student CSE [100];
    
    strcpy(ECE[0].name,"ABHAY");
    ECE[0].age = 19;
    ECE[0].weight = 69.5;

    printf("NAME = %s\n",ECE[0].name);
    printf("AGE = %d\n",ECE[0].age);
    printf("WEIGHT = %f\n\n\n",ECE[0].weight);

                    /*INITIALIZATION STRUCTURE METHOD*/

    struct student AIML = {"ABHAY KAUSHAL", 19 , 68};
    printf("NAME IS : %s\n",AIML.name);
    printf("AGE IS : %d\n",AIML.age);
    printf("WEIGHT IS : %f\n\n\n\n\n",AIML.weight);


    struct student *ptr;
    ptr = &AIML;

    printf("NAME IS : %s\n",(*ptr).name);
    printf("AGE IS : %d\n",(*ptr).age);
    printf("WEIGHT . IS : %f\n\n\n\n\n\n",(*ptr).weight);
    printf("WEIGHT -> IS : %f\n\n\n\n\n\n",ptr->weight);
    /*  (*ptr).code   <-->   ptr -> code   */
    


return 0;   
    
}
