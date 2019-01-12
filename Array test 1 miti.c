#include <stdio.h>
#include <stdlib.h>
struct human  {
	int id;
	int age;
	int salary;
	
};
int main (void)
{
	struct human man[10];
	for(int i=0;i<10;i++)
	{
		man[i].id = i+1;
		man[i].age = 30;
    man[i].salary = 25000+5000; 
	}
	for(int i=0;i<10;i++)
	{
		printf("Hello id : %d  age : %d  salary : %d\n ",man[i].id,man[i].age,man[i].salary);
		
	}
	return 0;
}