#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,flag=1,l;
    printf("Enter the string : ");
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("String is invalid");
    }
    else
    {
        if(s[0]=='0'&&s[l-1]=='1')
        {
            printf("The  string is accepted");
        }
        else
        {
            printf("The string is not accepted");
        }
    }

}
