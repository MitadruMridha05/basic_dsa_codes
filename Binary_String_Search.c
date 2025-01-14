#include<stdio.h>
#include<string.h>
int String_matcher(char s1[],char s2[]){
    int b=0;
    if(strlen(s1)>strlen(s2)){
        b=1;
    }
    else if(strlen(s1)<strlen(s2)){
        b=-1;
    }
    else{
        for(int i=0;i<=strlen(s1)){
            if((int)s1[i]>(int)s2[i]){
                b=1;
                break;
            }
            else if ((int)s1[i]<(int)s2[i]){
                b=-1;
                break;

            }
            else{
                b=0;
            }
        }

    }
    
    return b;
}
int String_finder(char arr[][],char st[]){
        int n = sizeof(arr) / sizeof(arr[0]);
        int l = 0; 
        int r = n - 1; 
   
    while (l <= r) { 
  
        int m = l + (r - l) / 2; 
        int res = -1000; 
  
        if (String_matcher(st,arr[m])==0) 
            res = 0; 
        if (res == 0) 
            return m; 
  
        if (String_matcher(st,arr[m])==1) 
            l = m + 1; 
  
        else
            r = m - 1; 
    } 
  
    return -1;
}

int main()
{
    char arr[5][100] = {"apple", "banana", "cherry", "date", "elderberry"};
    char st[100];

    printf("Enter a string to search for: ");
    gets(st); 

    int result = String_finder(arr, st);

    if (result != -1) {
        printf("String found at index %d.\n", result);
    } else {
        printf("String not found.\n");
    }

    return 0;
}