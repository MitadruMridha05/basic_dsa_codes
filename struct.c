#include<stdio.h>
typedef struct Date
{
    int day;
    int month;
    int year;
}date;
int compare_to_date(date x,date y){
    int f=0;
    if(x.day!=y.day) f++;
    if(x.month!=y.month) f++;
    if(x.year!=y.year) f++;
    return f;
}
int main(){
    date date_1;
    printf("Enter the first date: \n");
    scanf("%d%d%d",&date_1.day,&date_1.month,&date_1.year);
    date date_2;
    printf("Enter the second date: \n");
    scanf("%d%d%d",&date_2.day,&date_2.month,&date_2.year);
    int r=compare_to_date(date_1,date_2);
    if(r==0){
        printf("The two dates are same.\n");
    }
    else{
        printf("The two dates are different.\n");
    }
    return 0;
}