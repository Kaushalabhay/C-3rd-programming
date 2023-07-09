#include<stdio.h>

struct studentinfo{
    int Branch;
    int RollNo;
    int Name;
};

int main()
{
    struct studentinfo s1 ;
    scanf("%d%d%d",&s1.Branch,&s1.Name,&s1.RollNo);

    printf("%d\n%d\n%d",s1.Branch,s1.Name,s1.RollNo);

    return 0;
}

