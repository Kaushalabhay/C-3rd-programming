#include<stdio.h>

//marks >30 = pass
//marks <= fail

int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

//    if(marks <= 30 && marks>= 0)
// {printf("FAIL\n");}
// else if( marks >30 && marks<= 100)
// {printf("PASS\n");}
// else{
//     printf(" WRONG MARKS");
// }

marks <= 30 ? printf("FAIL\n") : printf(" PASS\n");


return 0;
}