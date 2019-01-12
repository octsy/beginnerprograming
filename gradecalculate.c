#include <stdio.h>


  char gradecalculate(int score)
  {
    char grade;
    if(score>=80)
    {
      grade = 'a';
    }
    else if(score>=70 && score<=79)
    {
      grade = 'b';
    }
    else if(score>=60 && score<=69)
    {
      grade = 'c';
  
    }
    else if(score>=50 && score<=59)
    {
      grade = 'd';

    }
    else
    {
      grade = 'f';
    }
    return grade;
  }
  int main(void)
{
  int inputscore;
  printf("Your score is :");
  scanf("%d",&inputscore);
  printf("Your grade is : %c",gradecalculate(inputscore));
  return 0;
}

  
  