#include<stdio.h>
int mridha(int n){
    if(n==0 || n==1 || n==2) return n;
    return mridha(n-3)+mridha(n-1)+mridha(n-2);
}
int main(){
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ", mridha(i));
    }
}