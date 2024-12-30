#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    
    double a,b,c,root1,root2,x,z;
    printf("enter values of a,b,c ");
    scanf("%lf%lf%lf",&a,&b,&c);
    
     x=b*b-(4*a*c);
     z=sqrt(x);

    root1=(-b+z)/(2*a);
    root2=(-b-z)/(2*a);

    printf("root1=%lf\nroot2=%lf",root1,root2);
    return 0;
}
