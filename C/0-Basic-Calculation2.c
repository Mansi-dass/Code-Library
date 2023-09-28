// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include <stdio.h>

int main()
{
    // Take Input to convert
    float c_degree;
    printf("Enter degree in celsius ");
    scanf("%f", &c_degree);

    // convert centigrade into fahrenheit
    float f_degree = (c_degree * 1.8) + 32;
    printf("celsius into fahrenheit : %f" , f_degree); 
    return 0;
}