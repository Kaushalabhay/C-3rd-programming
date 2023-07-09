#include <stdio.h>

void main()
{
  int a , i , sum = 0;

  for(i = 1 ; i <= 5 ; i++)
  {
    printf("ENTER THE VALUE OF A : ");
    scanf("%d",&a);

    if(a<0){
      printf("YOU ENTERED A NUMBER LESS THAN ZERO(-ve)\n");
      break;
    }
  
    sum = sum + a;
    printf("SUM LILL NO IS : %d\n\n", sum);

  }
  printf("TOTAL SUM IS : %d\n", sum);
}