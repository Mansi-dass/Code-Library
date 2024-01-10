// Write a structure capable of storing tstamp. Write a function to compare those dates.
#include <stdio.h>
typedef struct timestamp{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
}tstamp;
void display(tstamp d){
    printf("The tstamp is: %d/%d/%d  %d:%d:%d\n",d.year,d.day, d.month,d.hour, d.minute,d.second);
}
int compare(tstamp t1, tstamp t2){
    if(t1.year>t2.year||t1.month>t2.month||t1.day>t2.day||t1.hour>t2.hour||t1.minute>t2.minute||t1.second>t2.second){
        return 1;
    }
    if(t1.year<t2.year||t1.month<t2.month||t1.day<t2.day||t1.hour<t2.hour||t1.minute<t2.minute||t1.second<t2.second){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    tstamp d1={2023, 11, 10, 12, 30, 30};
    tstamp d2={2023, 11, 10, 12, 30, 30};
    display (d1);
    display (d2);
    int a=compare(d1,d2);
    printf("Date comparision function returns %d",a);
    return 0;
}