#include <stdio.h>
#include <stdlib.h>
struct test {
	int fish;
	int vegetable;
	int meal;
	int milk;
	int cake;
	int rice;
	int beer;

};


int main(void) 
{
	struct test cost;
	cost.fish = 100;
  cost.vegetable = 20;
  cost.meal = 250;
  cost.milk = 50;
  cost.cake = 250;
  cost.rice = 20;
  cost.beer = 200;
	
	printf("%d\n",cost.fish);
  printf("%d\n",cost.vegetable);
  printf("%d\n",cost.meal);
  printf("%d\n",cost.milk);
  printf("%d\n",cost.cake);
  printf("%d\n",cost.rice);
  printf("%d\n",cost.beer);

  int total = cost.fish+cost.vegetable+cost.meal+cost.milk+cost.cake+cost.rice+cost.beer;

  printf("%d",total);
	return 0;
}
			
			
			

