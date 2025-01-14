#include<stdio.h>
#include<string.h>
typedef struct complex_numbers
{
    int real;
    int imaginary;
}complex;
complex To_complex(char x[]){
    complex a={(int)x[0],(int)x[2]};
    return a;
}
char add(char x[], char y[]){
    complex a=To_complex(x);
    complex b=To_complex(y);
    complex z;
    z.real=a.real+b.real;
    z.imaginary=a.imaginary+b.imaginary;
    char c[5];
    strcpy(c,To_String(z));
    return c;
}
char minus(char x[], char y[]){
    complex a=To_complex(x);
    complex b=To_complex(y);
    complex z;
    z.real=a.real-b.real;
    z.imaginary=a.imaginary-b.imaginary;
    char c[5];
    strcpy(c,To_String(z));
    return c;
}
char To_String(complex x){
    char a[]={(char)x.real,'+',(char)x.imaginary,'i','\0'};
    return a;
}

char into(char x[], char y[]){
    complex a=To_complex(x);
    complex b=To_complex(y);
    complex z;
    z.real=a.real*b.real-a.imaginary*b.imaginary;
    z.imaginary=a.real*b.imaginary+a.imaginary*b.real;
    char c[5];
    strcpy(c,To_String(z));
    return c;
}

int main(){
    char c_1[5];
    char c_2[5];
    printf("Enter the first complex number in the form x+yi: \n");
    scanf("%s",c_1);
    printf("Enter the second complex number in the form x+yi: \n");
    scanf("%s",c_2);
    printf("The addition of the two complex numbers are: %s\n",add(c_1,c_2));
    return 0;
}