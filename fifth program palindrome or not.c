#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int i,n,flag=1,green=1;
    printf("Enter the string:\n");
    scanf("%s",&st);
    n=strlen(st);
    for(i=0;i<n;i++)
    {
        if(st[i]!='0'&&st[i]!='1')
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("The input is invalid enter only 1's and 0's");
    }
    else
    {
        for(i=0;i<(n/2);i++)
        {
            if(st[i]!=st[n-i-1])
            {
                green=0;
                break;
            }
        }
        if(green==1)
        {
            printf("The string is a palindrome");
        }
        else{
            printf("The string is not a palindrome");
        }
    }
}
