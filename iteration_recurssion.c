#include<stdio.h>
#include<string.h>
int iter(char c[])
{
    int s=0;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
        {
            s++;
        }
    }
    return s;
}

int rec(char c[],int i)
{
    if(c[i]=='\0') return 0;
    int vowel= (c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U');
    return vowel + rec(c,i+1);
}

int main()
{
    char c[600];
    printf("enter the strings: \n");
    gets(c);
    int i=iter(c);
    printf("The number of vowels in the string using iteration is: %d\n",i);
    int r=rec(c,0);
    printf("The number of vowels in the string using recursion is: %d\n",r);
    return 0;
}
