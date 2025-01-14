#include<stdio.h>
int main(){
    int *int_ptr;
    float *float_ptr;
    double *double_ptr;
    char *char_ptr;
    printf("Size of int pointer: %d bytes\n", sizeof(int_ptr));
    printf("Size of float pointer: %d bytes\n", sizeof(float_ptr));
    printf("Size of double pointer: %d bytes\n", sizeof(double_ptr));
    printf("Size of char pointer: %d bytes\n", sizeof(char_ptr));
    return 0;
}