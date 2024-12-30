#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int x , y , z , dif;
    printf("enter valume count");
    scanf("%d%d",&x,&y);

    if (x>y)
    {
         dif=x-y;
        
        /* code */
    }
    else if (x<y)
    {
        dif=y-x;
        /* code */
    }
    else
    {
        printf("no movement detected");

    }
    // z=abs(dif);
printf("volume button pressed %d times",dif);
            return 0;

}
