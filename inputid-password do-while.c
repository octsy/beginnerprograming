#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int inputid;
  int inputpassword;
  do
  {
    printf("Your id :");
    scanf("%d",&inputid);
    printf("Your password :");
    scanf("%d",&inputpassword);
    
  }while(inputid != 1234 || inputpassword != 4321);
  printf(" Done!!");
  return 0;
  
}