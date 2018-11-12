#include<stdio.h>
int main()
{
    double  mealCost;
    int tipPercent, taxPercent, total;
    double tip, tax, totalCost;
    scanf("%lf%d%d", &mealCost, &tipPercent, &taxPercent);
    tip=mealCost*((double)tipPercent/100);
    tax=mealCost*((double)taxPercent/100);
    totalCost=mealCost+tip+tax;
    total=(int)(totalCost);
    printf("The total meal cost is %d dollars.\n",total);
    return 0;
}
