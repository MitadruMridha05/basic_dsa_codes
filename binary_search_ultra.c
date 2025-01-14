#include<stdio.h>
#include<string.h>

void String_sort(char ar[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(String_matcher(ar[i],ar[j])==1){
                for(int k=0;k<100;k++){
                    char t =ar[i][k];
                    ar[i][k]=ar[j][k];
                    ar[j][k]=t;
                }
            }
        }
    }
}

int String_matcher(char s1[], char s2[]){
    int b=0;
    int x=strlen(s1)<strlen(s2)?strlen(s1):strlen(s2);
        for(int i=0;i<x;i++){
            
            if((int)s1[i]>(int)s2[i]){
                b=1;
                break;
            }
            else if ((int)s1[i]<(int)s2[i]){
                b=-1;
                break;
            }
        }
        if(b==0){
            if(strlen(s1)>strlen(s2)){
                b=1;
            }
            else if(strlen(s1)<strlen(s2)){
                b=-1;
            }
        }
        
    return b;
}

int recursion_search(char target[], char arr[][100],int l,int r){
    if (r >= l){ 
        int m=(l+(r-1))/2;
        if(String_matcher(target,arr[m])==0) return m;
        else if(String_matcher(target,arr[m])==1) recursion_search(target,arr,m+1,r);
        else recursion_search(target,arr,l,m-1);
    }
    else{
        return -1;
    }
}

int String_finder(char target[],char arr[][100],int n){
    int l=0;
    int r=n-1;
    while(l<=r){
        int m=(l+(r-1))/2;
        int res=-1000;
        if(String_matcher(target,arr[m])==0){
            res=0;
        }
        if(res==0) return m;
        if(String_matcher(target,arr[m])==1) l=m+1;
        else 
        r=m-1;
    }
}

int main(){
    int n;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    char arr[n][100];
    char st[100];
    printf("Enter %d strings: \n",n);
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    printf("enter a string to search: ");
    scanf("%s",st);
    String_sort(arr,n);
    int result1 = String_finder(st,arr,n);
    if (result1!=-1){
        printf("String found at index using iteration %d.\n",result1);
    }
    else{
        printf("String not found.\n");
    }
     int result2 = recursion_search(st,arr,0,n-1);
    if (result2!=-1){
        printf("String found at index using recursion %d.\n",result2);
    }
    else{
        printf("String not found.\n");
    }
    return 0;
}