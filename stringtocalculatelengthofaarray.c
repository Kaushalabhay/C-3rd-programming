#include<stdio.h>

int countarray(char arr[]);

int main()
{
    char name[100];
    fgets(name , 100 , stdin);
   printf("THE ARRAY HAS %d CHARACTERS",countarray(name));

    return 0;
}

int countarray(char arr[])
{   int count = 0;
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        count++;
    }
    return count - 1;
}