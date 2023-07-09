#include<Stdio.h>
#include<string.h>

struct student{
    int age;
    float weight;
    char name[100];
};

void information(struct student AIML);   //DECLARATION OF FUNCTION

int main()
{
    struct student AIML = {19,234,"ABHAY"};
    information(AIML);

}

void information(struct student AIML){
    printf("STUDENTS INFORMATION IS : \n");

    printf("NAME IS : %s\n",AIML.name);
    printf("AGE IS : %d\n",AIML.age);
    printf("WEIGHT IS : %f\n\n\n\n\n",AIML.weight);


}

