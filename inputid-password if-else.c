#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int inputid;
  int inputpassword;
  int id = 1234;
  int password = 4321;
  printf("your id :");
  scanf("%d",&inputid);
  printf("your password :");
  scanf("%d",&inputpassword);
  if(inputid == id  &&inputpassword == password)
  {
    printf(" Done !");

  }
  else
  {
    printf("Wrong !");
    
  }
  return 0;
}
