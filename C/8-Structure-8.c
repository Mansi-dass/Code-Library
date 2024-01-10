// Solve problem 9 for time using typedef keyword.
// Write a structure capable of storing time. Write a function to compare those dates.
#include <stdio.h>
typedef struct time{
    int hour;
    int minute;
    int second;
}time;
void display(time t){
    printf("The time is: %d-%d-%d \n",t.hour, t.minute,t.second);
}
int compare(time t1, time t2){
    
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    if(t1.minute>t2.minute){
        return 1;
    }
    if(t1.minute<t2.minute){
        return -1;
    }
    if(t1.second>t2.second){
        return 1;
    }
    if(t1.second<t2.second){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    time t1={12,15,30};
    time t2={12,5,00};
    display (t1);
    display (t2);
    int a=compare(t1,t2);
    printf("Date comparision function returns %d",a);
    return 0;
}