#include<stdio.h>
#include<string.h>
void reverse_strings(char str[])
{
    int i,j,k,l,m;
    l=0;
    int p=0;
    for(k=0;k<1000000;k++)
    {
        if(str[k]==' ')
        {
            l++;
        }
        else if(str[k]=='\0')
        {
            l++;
            break;
        }
    }
    int a[l];
    for(k=0;k<1000000;k++)
    {
        if(str[k]==' ')
        {
            a[p]=k;
            p++;
        }
        else if(str[k]=='\0')
        {
            a[p]=k;;
            break;
        }
    }
    i=0;
    m=0;
    j=a[m];
    str[a[l-1]]=' ';
    str[a[l-1]+1]='\0';
    while(j<=a[l-1])
    {
        int o=j;
        int n=i;
        while(o>n)
        {
            int t=str[o];
            str[o]=str[n];
            str[n]=t;
            n++;
            o--;
        }
        m++;
        i=j+1;
        j=a[m];

    }

    //return str;
    puts(str);
}
int main()
{
    char s[600];
    printf("Enter the strings: \n");
    gets(s);
    reverse_strings(s);
    return 0;
}