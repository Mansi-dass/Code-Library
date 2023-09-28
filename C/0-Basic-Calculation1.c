// Calculate the area of a circle and modify the same program to calculate 
// the volume of a cylinder given its radius and height.

#include <stdio.h>

int main(){
    // Area of circle
    int radius;
    printf("Enter the value of radius \n");
    scanf("%d", &radius);
    float area = (3.14* radius * radius);
    printf("The area of circle is %f \n", area);

    // Volume of a cylinder 
    int height;
    printf("Enter the value of height \n");
    scanf("%d",&height);
    float volume= area *height;
    printf("The volume of cylinder is %f \n",volume);
    return 0;
}