#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    float unit,surcharge,Rs,charge;
    printf("enter units of electricity: ");
    scanf("%f",&unit);
  
    // surcharge=(unit*charge)*(20/100);
    // Rs=unit*charge+surcharge;

    if (unit<=50)
    {
        charge=0.50f;
        surcharge=(unit*charge)*20/100;
    Rs=unit*charge+surcharge;
            printf("surcharge=%f",surcharge);

        printf("\ntotal rupees=%f",Rs);
    }
    else if (unit<=150)
    {
        charge=0.75f;
        surcharge=(unit*charge)*20/100;
    Rs=unit*charge+surcharge;
            printf("surcharge=%f",surcharge);

        printf("\ntotal rupees=%f",Rs);
    }
    else if (unit<=250)
    {
        charge=1.20f;
        surcharge=(unit*charge)*20/100;
    Rs=unit*charge+surcharge;
            printf("surcharge=%f",surcharge);

        printf("\ntotal rupees=%f",Rs);
    }
    else if (unit>=250)
    {
        charge=1.50f;
        surcharge=(unit*charge)*20/100;
    Rs=unit*charge+surcharge;
            printf("surcharge=%f",surcharge);

        printf("\ntotal rupees=%f",Rs);
    }
    
    

    return 0;
}
