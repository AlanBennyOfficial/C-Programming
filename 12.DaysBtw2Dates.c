#include <stdio.h>

int main(){
    int d1,d2,m1,m2,y1,y2,a,b,diff;
    printf("Enter the first day: ");
    //PROGRAM TO PRINT THE DAYS BETWEEN 2 DATES

    scanf("%d-%d-%d", &d1,&m1,&y1);
    printf("Enter the second day: ");
    scanf("%d-%d-%d", &d2,&m2,&y2);
    
    if (y1%4==0){
        if (m1==2){
            a = (y1 * 366) + (m1 * 29) + d1;
        }else if (m1%2!=0 || m1==8 ||m1==10 ||m1==12){
            a = (y1 * 366) + (m1 * 31) + d1;
        }else
            a = (y1 * 366) + (m1 * 30) + d1;
    }else
        if (m1==2){
            a = (y1 * 365) + (m1 * 29) + d1;
        }else if (m1%2!=0 || m1==8 ||m1==10 ||m1==12){
            a = (y1 * 365) + (m1 * 31) + d1;
        }else
            a = (y1 * 365) + (m1 * 30) + d1;


    if (y2%4==0){
        if (m2==2){
            b = (y2 * 366) + (m2 * 29) + d2;
        } else if (m2%2!=0 || m2==8 || m2==10 || m2==12){
            b = (y2 * 366) + (m2 * 31) + d2;
        } else
            b = (y2 * 366) + (m2 * 30) + d2;
    }else
        if (m2==2){
            b = (y2 * 365) + (m2 * 29) + d2;
        } else if (m2%2!=0 || m2==8 || m2==10 || m2==12){
            b = (y2 * 365) + (m2 * 31) + d2;
        } else
            b = (y2 * 365) + (m2 * 30) + d2;
            
    if (b>=a)
        diff = b - a;
    else
        diff = a - b;
    
    printf("\nThe number of days between %d-%d-%d and %d-%d-%d is: %d\n", d1,m1,y1, d2,m2,y2, diff);
    return 0;    
}