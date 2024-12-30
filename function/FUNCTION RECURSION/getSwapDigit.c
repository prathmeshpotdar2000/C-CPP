#include <stdio.h>
int i = 0,digit,rem,count = 0, power=1,mid,f,m;
int main(int argc, char const *argv[])
{
    int getNatural(int); // declaration
    int num, result;
    printf("enter number : ");
    scanf("%d", &num);
    result = getNatural(num);
    printf("\nthe swap no is: %d ", result);
    return 0;
}
int getNatural(int n)
{
    count++; 
    if (count == 1)
    {
    int temp=n;
        rem = n % 10;
        // printf(" %d", rem);
        n=n/10;
        // printf("num is %d",n);
        while (temp>100)
        {
            power=power*10;
          temp=temp/10;
        }
        // printf("Power is %d",power);
        f = rem*power;   
         mid=n%power;
        // printf("mid is %d",mid);  
    }
    if (n > 10)
    {
        //  printf(" %d",n);
        n = n / 10;
        m=(f+mid)*10+n;
        // printf("\n %d",m);
    // printf("count =%d",count);
        return getNatural(n);
    }
    else
    {
        return m;

    }
}