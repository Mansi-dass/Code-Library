// Write a structure capable of storing date. Write a function to compare those dates.
#include <stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("The date is: %d/%d/%d \n",d.date, d.month,d.year);
}
int compare(date d1, date d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    date d1={9,10,2023};
    date d2={9,10,2023};
    display (d1);
    display (d2);
    int a=compare(d1,d2);
    printf("Date comparision function returns %d",a);
    return 0;
}