#include<string.h>
#include<stdio.h>
char anabelle(char s1[], char s2[])
{
    char a ='T';
    int f=0;
    if(strlen(s1)!=strlen(s2)) a='F';
    for(int i=0;i<strlen(s1);i++)
    {
        for(int j=0; j<10000;j++)
        {
             if(s2[j]=='\0')
            {
                f++;
                break;
            }
            else if(s2[j]==s1[i])
            {
                break;
            }
           
            
        }
        if(f!=0)
        {
            a='F';
            break;
        }
    }
    return a;
    
}
int main()
{
    char s1[1000];
    char s2[1000];
    printf("Enter sting 1: \n");
    gets(s1);
    printf("Enter sting 2: \n");
    gets(s2);
    char a=anabelle(s1,s2);
    if(a='T')
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}