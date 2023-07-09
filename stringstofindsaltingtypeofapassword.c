#include<stdio.h>
#include<string.h>

void salting(char password[]);

void main()
{
    char password[100];
    scanf("%s",password);
    salting(password);

}

void salting(char password[]){
    char salt[] = "123";
    char newpassword[200];
    
    strcpy(newpassword,password);
    puts(newpassword);
    strcat(newpassword,salt);
    puts(newpassword);
}