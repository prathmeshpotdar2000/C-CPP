#include<stdio.h>

int main(int argc, char const *argv[])
{
    int amt,bal,current_bal;
    float charge=0.5f,final_bal;

    printf("enter withdraw bal:");
    scanf("%d",&amt);
    scanf("%d",&bal);
    if (amt%5==0 && amt<=bal)
    {
        printf("successful transaction");
        current_bal=bal-amt;
        final_bal=current_bal-charge;
        printf("\nfinal balance is:%f",final_bal );
    
    }else if (amt>=bal)
    {
        printf("Insufficient Funds");
        printf("\n%d",bal );

        /* code */
    }
    
    
    else
    {
        printf("Incorrect Withdrawal Amount (not multiple of 5)");
        printf("\n%d",bal);
    }
    
    
    return 0;
}
