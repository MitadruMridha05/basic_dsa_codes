#include<stdio.h>
void reverse_array(int arr[],int n){
    int* i=&arr[0];
    int* j=&arr[n-1];
    while(i<j){
        int t=*i;
        *i=*j;
        *j=t;
        i++;
        j--;
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverse_array(arr,n);
     printf("Array after arranging in reverse:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}