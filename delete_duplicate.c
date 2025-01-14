#include<stdio.h>
void delete_duplicate(int arr[], int *n) {
    for (int i = 0; i < *n - 1; i++) {
        for (int j = i + 1; j < *n; j++) {
            if (arr[i] == arr[j]) {
                for (int c = j; c < *n - 1; c++) {
                    arr[c] = arr[c + 1];
                }
                (*n)--;
                j--; 
            }
        }
    }
}
    int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    delete_duplicate(arr, &n);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}