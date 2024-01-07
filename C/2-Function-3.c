// Write a function to calculate the force of attraction 
// on a body of mass m exerted by earth. (g=9.8m/S2).
#include <stdio.h>
float force_of_attraction(float mass);
int main(){
    float m,force;
    printf("Enter the value of mass in kgs\n");
    scanf("%f",&m);
    force=force_of_attraction(m);
    printf("the value of force in newton is %.2f\n",force);
    return 0;
}
float force_of_attraction(float mass){
    float result= (mass * 9.8);
    return result;
}