#include <stdio.h>
#include <stdlib.h>

int salarycalculate()
{
    int money = 12000;
    return money;
}
float bonuscalculate(int salary)
{
float ans = salary+(salary*12/100);
return ans;
}
int main(void)
{
    printf("%f",bonuscalculate(10000));
    return 0;
}
