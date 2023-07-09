#include<stdio.h>

int main()
{
    char *canchange = "HELLO WORLD";
    puts(canchange);
    canchange = "hello";
    puts(canchange);

    char cannotchange[] = "HELLO WORLD";
    puts(cannotchange);
    cannotchange[] = "hello" ;
    puts(cannotchange);

}