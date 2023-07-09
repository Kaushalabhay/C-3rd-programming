#include <stdio.h>

int main(){
    char name[] = "ABHAY KAUSHAL";

   // scanf("%s",name);       //NO NEED TO WRITE & WITH THE SCANF(NAME) BCOZ IT IS A POINTER IT SELF
    printf("HELLO\n\n%s",name);

}

             /*   WITH THE HELP OF ARRAY   */
/*void printstring(char arr[]);

int main()
{

    char firstname[] = "ABHAY ";
    char secondname[] = "KAUSHAL";

    printstring(firstname);
    //printf("\t");
    printstring(secondname);

    return 0;
}

void printstring(char arr[])
{
    for(int i = 0; arr[i] != 0; i++){
        printf("%c",arr[i]);
    }
}
*/