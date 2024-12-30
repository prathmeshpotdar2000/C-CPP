#include<stdio.h>
#include<string.h>
void reverse(char[]);

int main(int argc, char const *argv[])
{
    char a[90],res[90]="",word[90];
    int j=0;
    printf("enter the string: ");
    gets(a);
                                   //   012345678910
    printf("original string is:%s",a);//hello world
    reverse(a);
    strcat(a," ");
    for (int i = 0; i < a[i]!='\0'; i++)
    {
        if (a[i]==' ')
        {
           word[j]='\0';
           reverse(word);
           strcat(res,word);
           strcat(res," ");
           j=0;
        }
        else
        {
           word[j]=a[i];
           j++; 
        }
        
    }
    printf("\nreverse string is:%s",res);
    return 0;
}

void reverse(char ch[])
{
  int len=strlen(ch);
//   printf("len=%d",len);
 int mid=len/2;
  for (int i = 0; i < mid; i++)
  {
    char temp=ch[i];
    ch[i]=ch[len-1-i];
    ch[len-1-i]=temp;
  }
  
}