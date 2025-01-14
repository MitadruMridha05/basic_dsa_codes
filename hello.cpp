#include<stdio.h>
#include<string.h>
void reverse_strings(char str[]){
    
   int i,j,k,l,m;
    l=0;
    
    //puts(str);
    for(k=0;k<1000000;k++){
        if(str[k]==' '){
            l++;
        }
        else if(str[k]=='\0'){
            l++;
            break;
        }
    }
    int a[l];
    for(k=0;k<1000000;k++){
         if(str[k]==' '){
            a[i]=k;
            i++;
        }
        else if(str[k]=='\0'){
            a[i]=k;;
              break;
        }
    }
    i=0;
    m=0;
    j=a[m];
    while(j<a[l]){
         while(j>i){
        int t=str[j];
        str[j]=str[i];
        str[i]=t;
        i++;
        j--;
         }
         m++;
         i=j+1;
         j=a[m];
        
    }
    
    //return str;
    puts(str);
}
int main(){
    char s[600];
    printf("Enter the strings: \n");
    
    gets(s);
    reverse_strings(s);
    
    return 0;
    
}