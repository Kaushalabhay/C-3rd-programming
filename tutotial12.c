#include <stdio.h>

int main()

{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks >= 90)
        printf(" You have got A++ \n");
    
    else if(marks < 90 && marks > 80)
        printf(" You have got A\n");
    
    else if(marks < 80 && marks>60)
        printf(" You have got B++\n");
    
    else if(marks < 60 && marks> 40 )
        printf(" You have got B\n");
    
    else
        printf(" YOU ARE FAILED AND YOU HAVE TO REPEAT THE SAME CLASS");
    
    return 0;
}


