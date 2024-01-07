// Write a function to convert Celcius temperature into Fahrenheit
#include <stdio.h>
void celcius_to_fahrenheit(int cel);
int main(){
    int cel;
    printf("Enter the value of celcius to be  converted into fahrenheit\n");
    scanf("%d",&cel);
    celcius_to_fahrenheit(cel);

    return 0;
}
void celcius_to_fahrenheit(int cel){
float fah;
fah=(cel*1.8)+32;
printf("the fahrenheit valve: %f",fah);
}