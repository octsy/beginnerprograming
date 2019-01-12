#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
  char greeting[12] = "Hello";
  char str2[12] = "world";
  char str3[12];
  printf("massager is %s\n",greeting);
  strcpy(str3,greeting);
  printf("strcpy(str3,greeting) is %s\n",str3);
  strcat(greeting,str2);
  printf("strcat(greeting,str2) is %s\n",greeting);
  int len = strlen(greeting);
  printf("int len = strlen(greeting) is %d",len);
  return 0;
}