/*find the  absulate differance  between the inpute and 51 ,if number
is greater than 51,it will display triple the absolutw difference*/
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int x,dif,abc;
    printf("enter num");
    scanf("%d",&x);
    dif=x-51;
    abc=abs(dif);
    (x>51)?printf("%d",abc*3):printf("%d",abc);

    return 0;
}
