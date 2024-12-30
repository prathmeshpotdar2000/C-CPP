#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[90];
    int count = 1, temp, flag = 0, count1 = 0;
    printf("Enter the string: ");
    gets(a);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        // printf("\nouter loop character is %c ",a[i]);
        for (int j = i + 1; j < len; j++)
        {
            //  printf("\ninner loop character is %c",a[j]);
            if (a[i] == a[j])
            {
                temp = a[i];
                flag = 1;
                count++;
                //  break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    printf("\nfirst occurance is %c and its count is %d", temp, count);
    printf("\n original string %s", a);
    for (int i = 0; i < len - (1); i++)
    {
        if (a[i] == temp)
        {
            for (int j = i; j < len - (count1+1); j++)
            {
                count1++;
                char temp2 = a[i];
                a[j] = a[j + 1];
            }
            // i--;
        }
    }
    printf("\n after removing duplicate string is %s", a);

    return 0;
}
