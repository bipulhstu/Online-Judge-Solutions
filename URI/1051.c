#include<stdio.h>
int main()
{
    float salary,tax1, tax2, tax3;
    scanf("%f", &salary);
    if(salary>=0.00 && salary<=2000.00)
    {
        printf("Incento\n");
    }
    else if(salary>=2000.01 && salary<=3000.00)
    {
        tax1=(salary-2000.00)*0.08;
        printf("R$ %0.2f\n",tax1);

    }
    else if(salary>=3000.01 && salary<=4500.00)
    {
        tax1=1000.00*0.08;
        tax2=(salary-3000.00)*0.18;
        printf("R$ %0.2f\n",tax1+tax2);

    }
        else if(salary>4500.00)
    {
        tax1=1000.00*0.08;
         tax2=1500.00*0.18;
        tax3=(salary-4500.00)*0.28;
        printf("R$ %0.2f\n",tax1+tax2+tax3);

    }
    return 0;
}
