#include<stdio.h>
#include<string.h>

struct address 
{
    int housenumber;
    int streenumber;
    char city[100];
    char state[100];
};

void printadd(struct address add);

int main(){
    struct address person[5];

    printf("ENTER INFORMATION FOR THE FIRST PERSON\n");

    scanf("%d",&person[0].housenumber);
    scanf("%d",&person[0].streenumber);
    scanf("%s",&person[0].city);
    scanf("%s",&person[0].state);


    printf("ENTER INFORMATION FOR THE SECOND PERSON\n");

    scanf("%d",&person[1].housenumber);
    scanf("%d",&person[1].streenumber);
    scanf("%s",&person[1].city);
    scanf("%s",&person[1].state);



     printf("ENTER INFORMATION FOR THE THIRD PERSON\n");

    scanf("%d",&person[2].housenumber);
    scanf("%d",&person[2].streenumber);
    scanf("%s",&person[2].city);
    scanf("%s",&person[2].state);


     printf("ENTER INFORMATION FOR THE FOUR PERSON\n");

    scanf("%d",&person[3].housenumber);
    scanf("%d",&person[3].streenumber);
    scanf("%s",&person[3].city);
    scanf("%s",&person[3].state);



    printf("ENTER INFORMATION FOR THE FIVE PERSON\n");

    scanf("%d",&person[4].housenumber);
    scanf("%d",&person[4].streenumber);
    scanf("%s",&person[4].city);
    scanf("%s",&person[4].state);

    
    
}

void printadd(struct address add){


}
